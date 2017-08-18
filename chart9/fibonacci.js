function fibonacci(n){
	if(n > 2){
		return fibonacci(n-1) + fibonacci(n-2);
	} else {
		return 1;
	}
}


for(var i = 1;i <= 50;i++){
	console.log(i+": "+fibonacci(i));
}