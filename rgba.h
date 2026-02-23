#pragma once


class RGBA
{
    private:
	    unsigned r = 0;
	    unsigned g = 0;
	    unsigned b = 0;
	    unsigned a = 0;
    public:
	    RGBA();
	    RGBA(int r, int g, int b, int a);
	    void setColor(int r, int g, int b, int a = 255);
	    void setColor();
	    int red() const;
	    int green() const;
	    int blue() const;
	    enum PrintType {
	        E_RGBA,
		E_HEX,
		E_INT
            };
	    int alpha() const;
	    void print(enum PrintType type = E_RGBA) const;
	    RGBA sum (const RGBA &s_color) const;
};
