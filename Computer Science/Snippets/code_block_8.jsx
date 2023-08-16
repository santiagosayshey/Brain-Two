function Footer() {
    const hour = new Date().getHours();
    const openHour = 12;
    const closeHour = 22;

    const isOpen = hour >= openHour && hour <= closeHour;

    if (!isOpen) {
        return (
            <footer className="footer">
                <div className="order">
                    <p>We're currently closed. Please come back later!</p>
                </div>
            </footer>
        )
    } else {
        return (
            <footer className="footer">
                <div className="order">
                    <p>We're open until {closeHour}:00. Come visit us or order online.</p>
                    <button className="btn">Order</button>
                </div>
            </footer>

        )
    }
}
