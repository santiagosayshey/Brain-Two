function calculateArea(shape) {
    if (shape.type == "circle") {
        return pi * (shape.radius ^ 2)
    } else if (shape.type == "rectangle") {
        return shape.width * shape.height
    } // Requires modification for a new shape
}
