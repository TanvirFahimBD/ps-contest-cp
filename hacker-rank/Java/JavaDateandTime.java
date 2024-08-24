package info.hackerrank;

import java.time.LocalDate;

public class JavaDateandTime {
    public static void main(String[] args) {
        LocalDate date = LocalDate.of(2021, 11, 04);
        System.out.print(date.getDayOfWeek().toString());
//        System.out.print(date.getDayOfWeek().toString().getClass().getSimpleName());
    }
}
