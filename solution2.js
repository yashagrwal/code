var async = require('async');
var x = [];
for(var  i = 0;i < 100;i++) {
	x[i] = i;
}
async.eachSeries(x, function(i, next) {
    setTimeout(function(i) {
        console.log(i);
        next()
    }.bind(this, i), Math.random()*1000);
	
});
