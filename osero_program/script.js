document.addEventListener('DOMContentLoaded', () => {
    const board = document.getElementById('game-board');
    const currentPlayerDisplay = document.getElementById('currentPlayerDisplay'); // 表示エリア
    const skipButton = document.getElementById('skipButton');
    const resetButton = document.getElementById('resetButton'); // リセットボタン

    // 初期のボードの設定
    let gameBoard = Array.from({ length: 8 }, () => Array(8).fill(null));
    let currentPlayer = 'white'; // 先行プレイヤー
    resetGame(); // 初期状態をセット

        // スキップボタンイベント
    skipButton.addEventListener('click', () => {
        if (!anyValidMove(gameBoard, currentPlayer)) {
            console.log(`${currentPlayer}には有効な手がありません。スキップします。`);
            currentPlayer = nextPlayer(currentPlayer); // プレイヤー交代
            highlightValidMoves(gameBoard, currentPlayer); // ハイライトを更新
            updateCurrentPlayerDisplay(); // プレイヤー表示を更新

            if (!anyValidMove(gameBoard, currentPlayer)) {
                console.log("両プレイヤーに有効な手がありません。ゲーム終了！");
                determineWinner(gameBoard); // 勝者判定
            }
        } else {
            alert("有効な手があるため、スキップできません。");
        }
    });
    
    // リセットボタンイベント
    resetButton.addEventListener('click', () => {
        resetGame(); // リセット処理を実行
    });
    
    updateCurrentPlayerDisplay(); // プレイヤー表示を更新

    

    // ボードの描画
    function drawBoard() {
        board.innerHTML = '';
        for (let i = 0; i < 8; i++) {
            for (let j = 0; j < 8; j++) {
                const cell = document.createElement('div');
                cell.classList.add('cell');
                if (gameBoard[i][j]) {
                    cell.classList.add(gameBoard[i][j]);
                }
                cell.addEventListener('click', () => handleCellClick(i, j));
                board.appendChild(cell);
            }
        }
    }

    // プレイヤー表示を更新
    function updateCurrentPlayerDisplay() {
        currentPlayerDisplay.textContent = `現在のプレイヤー: ${currentPlayer === 'white' ? '白' : '黒'}`;
    }

    // リセット機能
    function resetGame() {
        gameBoard = Array.from({ length: 8 }, () => Array(8).fill(null)); // ボードを初期化
        currentPlayer = 'white'; // プレイヤーを白にリセット
        gameBoard[3][3] = 'white';
        gameBoard[3][4] = 'black';
        gameBoard[4][3] = 'black';
        gameBoard[4][4] = 'white';
        updateCurrentPlayerDisplay(); // プレイヤー表示を更新
        drawBoard(); // 初期ボードを描画
        console.log("ゲームがリセットされました！");
    }

    // セルをクリックした時の処理
    function handleCellClick(row, col) {
        if (isValidMove(gameBoard, row, col, currentPlayer)) {
            gameBoard[row][col] = currentPlayer;
            flipStones(gameBoard, row, col, currentPlayer);
            currentPlayer = nextPlayer(currentPlayer);
            updateCurrentPlayerDisplay();
            drawBoard();
        }
    }

    // プレイヤー交代ロジック
    function nextPlayer(player) {
        return player === 'white' ? 'black' : 'white';
    }

    // 有効な手があるか確認
    function anyValidMove(board, color) {
        for (let i = 0; i < 8; i++) {
            for (let j = 0; j < 8; j++) {
                if (isValidMove(board, i, j, color)) {
                    return true;
                }
            }
        }
        return false;
    }

    // 有効な手判定
    function isValidMove(board, row, col, color) {
        if (board[row][col] !== null) {
            return false;
        }
        const directions = [
            [0, 1], [1, 0], [0, -1], [-1, 0],
            [1, 1], [1, -1], [-1, 1], [-1, -1]
        ];
        const opponentColor = color === 'white' ? 'black' : 'white';
        for (let [dx, dy] of directions) {
            let x = row + dx;
            let y = col + dy;
            let foundOpponent = false;
            while (x >= 0 && x < 8 && y >= 0 && y < 8 && board[x][y] === opponentColor) {
                x += dx;
                y += dy;
                foundOpponent = true;
            }
            if (foundOpponent && x >= 0 && x < 8 && y >= 0 && y < 8 && board[x][y] === color) {
                return true;
            }
        }
        return false;
    }

    // 石をひっくり返すロジック
    function flipStones(board, row, col, color) {
        const directions = [
            [0, 1], [1, 0], [0, -1], [-1, 0],
            [1, 1], [1, -1], [-1, 1], [-1, -1]
        ];
        const opponentColor = color === 'white' ? 'black' : 'white';
        for (let [dx, dy] of directions) {
            let x = row + dx;
            let y = col + dy;
            let stonesToFlip = [];
            while (x >= 0 && x < 8 && y >= 0 && y < 8 && board[x][y] === opponentColor) {
                stonesToFlip.push([x, y]);
                x += dx;
                y += dy;
            }
            if (x >= 0 && x < 8 && y >= 0 && y < 8 && board[x][y] === color) {
                for (let [flipX, flipY] of stonesToFlip) {
                    board[flipX][flipY] = color;
                }
            }
        }
    }

    // 勝者判定ロジック
    function determineWinner(board) {
        let whiteCount = 0;
        let blackCount = 0;
        for (let i = 0; i < 8; i++) {
            for (let j = 0; j < 8; j++) {
                if (board[i][j] === 'white') whiteCount++;
                if (board[i][j] === 'black') blackCount++;
            }
        }

        if (whiteCount > blackCount) {
            alert(`白の勝利！ 白の石数: ${whiteCount},黒の石数: ${blackCount}`);
        } else if (blackCount > whiteCount) {
            alert(`黒の勝利！ 白の石数: ${whiteCount},黒の石数: ${blackCount}`);
        } else {
            alert("引き分けです！");
        }
    }

    // 有効な手をハイライト
    function highlightValidMoves(board, player) {
        // すべてのセルのハイライトをリセット
        const cells = document.querySelectorAll('.cell');
        cells.forEach(cell => cell.classList.remove('highlight'));
    
        // 有効な手をハイライト
        for (let i = 0; i < 8; i++) {
            for (let j = 0; j < 8; j++) {
                if (isValidMove(board, i, j, player)) {
                    const cell = document.querySelector(`[data-row="${i}"][data-col="${j}"]`);
                    cell.classList.add('highlight');
                }
            }
        }
    }

    //クリックされたセルの処理
    function handleCellClick(row, col) {
        if (isValidMove(gameBoard, row, col, currentPlayer)) {
            gameBoard[row][col] = currentPlayer;
            flipStones(gameBoard, row, col, currentPlayer);
            currentPlayer = nextPlayer(currentPlayer);
            updateCurrentPlayerDisplay();
            drawBoard(); // ボードを再描画（ハイライトも更新される）
        }
    }
    //処理の詳細
    function drawBoard() {
        board.innerHTML = '';
        for (let i = 0; i < 8; i++) {
            for (let j = 0; j < 8; j++) {
                const cell = document.createElement('div');
                cell.classList.add('cell');
                cell.setAttribute('data-row', i);
                cell.setAttribute('data-col', j);
                if (gameBoard[i][j]) {
                    cell.classList.add(gameBoard[i][j]);
                }
                cell.addEventListener('click', () => handleCellClick(i, j));
                board.appendChild(cell);
            }
        }
        // ハイライトを更新
        highlightValidMoves(gameBoard, currentPlayer);
    }
        
});
