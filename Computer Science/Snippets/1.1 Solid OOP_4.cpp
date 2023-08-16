/* Example of **violation** of Open Closed Principle */
/* adapted from: Robert Martin - "Design Principles and Patterns"*/

class Modem {
};

class Hayes public Modem {
    public:
        std::string getType() {return "Hayes"};
}

class Courier public Modem {
    public:
        std::string getType() {return "Courier"};
};
	/* nested ifs choosing the right code based on specific values
    is a common feature when this principle is violated.  To add
    new Modem types, we must modify the LogOn code which violates
    the Open Closed Principle */

class ModemInterface {
	public:
		void LogOn(Modem m) {
			if (m.getType() == "Hayes")
				// do logon procedure for Hayes type modem
			else if (m.getType() == "Courier")
				....
}