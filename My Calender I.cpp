class MyCalendar {
public:

	map<int, int>  cal;
	MyCalendar() {

	}

	bool book(int start, int end) {

		for(auto itr : cal)
		{
			if(start < itr.second && end > itr.first)
				return false;
		}
		cal.insert({start, end});
		return true;

	}
};
