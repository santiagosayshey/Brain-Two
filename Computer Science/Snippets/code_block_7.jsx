function Pizza({ pizza }) {
    return (
        <li className={`pizza ${pizza.soldOut ? "sold-out" : ""}`}>
            <img src={pizza.photoName} alt="pizza"></img>
            <div>
                <h3>{pizza.name} </h3>
                <p>
                    {pizza.ingredients}
                </p>
                <span>
                    {pizza.soldOut ? <strong>SOLD OUT</strong> : pizza.price}
                </span>
            </div>
        </li >
    )
}
