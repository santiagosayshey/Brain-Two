...
// use mysql in this app
var mysql = require('mysql');

// create a 'pool' (group) of connections to be used for connecting with our SQL server
var dbConnectionPool = mysql.createPool({
 host: 'localhost',
 database: 'blog'
});

var app = express();

// Middleware for accessing database: We need access to the database to be available *before* we process routes in index.js,
// so this code needs to be *before* the app.use('/', routes);
// Express will run this function on every request and then continue with the next module, index.js.
// So for all requests that we handle in index.js, we’ll be able to access the pool of connections using req.pool

app.use(function(req, res, next) {
 req.pool = dbConnectionPool;
 next();
});

app.use(logger('dev'));
app.use(express.json());
...
