#ifndef __RECTANGLE
#define __RECTANGLE

template <typename T>
class CRectangle
{
	typedef T value_type;
public:
	CRectangle()
		: m_x(0),
		m_y(0),
		m_width(0),
		m_height(0)
	{}

	CRectangle(value_type x, value_type y, value_type width, value_type height) : 
		m_x(x),
		m_y(y), 
		m_width(width), 
		m_height(height) 
	{}

	//! Returns if point contains with rectangle
	bool contains(value_type x, value_type y) const
	{
		if(m_x < x && x < m_x + m_width && m_y < y && y < m_y + m_height)
			return true;

		return false;
	}
private:
	value_type m_x;
	value_type m_y;
	value_type m_width;
	value_type m_height;
};

#endif