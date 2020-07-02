#ifndef PONTO_HPP
#define PONTO_HPP
class Ponto{
	public:
		Ponto(const double coordX, const double coodY);
		~Ponto();

		inline double getCoordX() const{
			return coordX;
		}

		inline double getCoordY() const{
			return coordY;
		}
	private:
		const double coordX;
		const double coordY;
};
#endif
