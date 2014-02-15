int count(void *nums,size_t size) {
	return (size/=sizeof((void*)nums));
}

float media(float *nums,size_t size) {
	float media = 0.0;
	register int i;
	size = count(nums,size);

	for (i = 0;i < size;i++)
		media += *(nums+i);
	return media/size;
}

float mediana(float *nums,size_t size) {
	size = count(nums,size);
	
	float mediana = 0.0;
	int meio = size/2;
	return (!(size%2) ? *(nums+((meio+(meio-1))/2)) : *(nums+meio));
}