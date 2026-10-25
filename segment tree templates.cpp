


void build( int a[] , int v , int tl , int tr){
    if( tr - tl == 1){
        t[v] = a[tl] ; 
    }
    else{
int tm = (tl + tr)/2  ; 
build( a , v*2 , tl , tm ) ; 
build( a , v*2 + 1, tm , tr) ; 
t[v] = t[v*2] + t[v*2+1] ; 
    }
}

int sum( int v , int tl , int tr , int l , int r){

if( r <= tl || l >= tr)
return 0 ; 
if( l >= tl && tr <= r )
return t[v] ; 

int tm = (tl+tr)/2 ; 

return sum( v*2 , tl, tm  , l , r) + sum( v*2 + 1 , tm , tr, l , r ) ; 

}

void update( int v , int tl , int tr , int pos , int new_val ){
  if(  tr - tl ){
    t[v] = new_val ;
  }else
  {
 int tm = (tl + tr)/2 ;  
 if( pos < tm )
 {
update( v*2 , tl , tm , pos , new_val ) ; 
 }
 else
    update( v*2 + 1 , tm , tr , pos , new_val ) ; 
t[v] = t[v*2] + t[v*2+1] ; 
  }

}
