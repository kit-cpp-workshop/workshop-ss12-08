class MyClass
{
private:
	int myInt;
	
public:
	int getInt() const
	{
		return this->myInt;
	}
	
	void bad() const
	{
		this->myInt = 99;
	}
	
	void setInt(int value)
	{
		if(value < 0) { this->myInt = 0; }
		else          { this->myInt = value; }
	}
};