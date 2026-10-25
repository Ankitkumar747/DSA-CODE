package com.example.first

class main {
    companion object{
        @JvmStatic
        fun main(args: Array<String>){

        //* var and val

            // var a : Int
            // a = 2
            // var a = 2
            // val b : Int = 3 // val cannot be reassign because it is final type variable
            // println("Hello World $a,$b")

            //println("The sum of a and b is : ${add(5,6)}")



        //* Conditional statement

             // var num = 11

            // if(num>100){
                // println("number greater than 100")
            // }else{
                // println("number smaller than 100")
            // }


            // var msg = ""
            // msg = if(num>100){
                // "number greater than 100"
            // }else{
                // "number smaller than 100"}

            // println(msg)
            //}


            // when(num){ // method 1
                // 1 -> {

                // }
                // 100->{

                // }
            // }

            //when { // method 2
                //num > 100 -> {
                    //println("number greater than 100")
                //}
                //num < 100 -> {
                    //println("number smaller than 100")
                //}
                //else -> {
                    //println("number is exactly 100")
                //}
            //}


            // var num = 0
            // for(i in 0 until 10 step 2){ //* we can use until or (..) symbol for iterate or step increase the value of i or given variable
                // println("Number is $i")
            // }


            // for(i in 0 downTo  10){ //* we can use downTo also
                // println("Number is $num")
                // num++
            // }


            // for(i in 0..10){
                // println(num)
                // num++
            // }


        //* while
            //var num = 10

            //while(num<20){
                //println(num)
                //num++
            //}
            
        //* triple and pair
            var (a,b) = Pair("A", 1)
            
            println("$a, $b")
            
            //* function

            //fun add() : DataType{ to return data type
            //}

            //fun add(a : Int, b : Int) : Any{ // to return any kind of data type
                //return a+b

        }

    }
}