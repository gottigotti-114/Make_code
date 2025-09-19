class MeisaisController < ApplicationController
  before_action :set_meisai, only: %i[ show edit update destroy ]

  # GET /meisais or /meisais.json
  def index
    if params[:session][:user].nil?
      redirect_to "sessions/new"
    else
      @meisais = Meisai.all
    end
  end

  # GET /meisais/1 or /meisais/1.json
  def show
  end

  # GET /meisais/new
  def new
    @meisai = Meisai.new
  end

  # GET /meisais/1/edit
  def edit
  end

  # POST /meisais or /meisais.json
  def create
    @meisai = Meisai.new(meisai_params)

    respond_to do |format|
      if @meisai.save
        format.html { redirect_to @meisai, notice: "Meisai was successfully created." }
        format.json { render :show, status: :created, location: @meisai }
      else
        format.html { render :new, status: :unprocessable_entity }
        format.json { render json: @meisai.errors, status: :unprocessable_entity }
      end
    end
  end

  # PATCH/PUT /meisais/1 or /meisais/1.json
  def update
    respond_to do |format|
      if @meisai.update(meisai_params)
        format.html { redirect_to @meisai, notice: "Meisai was successfully updated." }
        format.json { render :show, status: :ok, location: @meisai }
      else
        format.html { render :edit, status: :unprocessable_entity }
        format.json { render json: @meisai.errors, status: :unprocessable_entity }
      end
    end
  end

  # DELETE /meisais/1 or /meisais/1.json
  def destroy
    @meisai.destroy!

    respond_to do |format|
      format.html { redirect_to meisais_path, status: :see_other, notice: "Meisai was successfully destroyed." }
      format.json { head :no_content }
    end
  end

  private
    # Use callbacks to share common setup or constraints between actions.
    def set_meisai
      @meisai = Meisai.find(params.expect(:id))
    end

    # Only allow a list of trusted parameters through.
    def meisai_params
      params.expect(meisai: [ :user_id, :menu_id, :total ])
    end
end
