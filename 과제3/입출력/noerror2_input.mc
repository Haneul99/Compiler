int w1, w2, w3;
const int sz = 987654321;	// define size
float f_arr[30];

/* main function */
int main(){
	int w1_, w2_, w3_;
	float A[9];

	w1 = w2 = w3 = 4;
	
	/* check w1 */
	if(w1 > 3){
		// check w2;
		if(w2 == 4) w2--;
		else w3++; 
	}
	else{
		while(w3 > 0){ // w3 is positive
			w3 -= 2;
			w1 += w3;
		}
	}

	while(w1_ % 2 == 0){
		w1_ = w1 + w2;
	}

	return w1_;
}