using System;
class Program
{
    public static void Main(string[] args)
    {
        CharFreq cf = new CharFreq();

        string msg = "This article is about classification of programming languages. For definition of the term programming model, see Programming model.A programming paradigm is a relatively high-level way to conceptualize and structure the implementation of a computer program. A programming language can be classified as supporting one or many paradigms.Paradigms are separated along and described by different dimensions of programming. Some paradigms are about implications of the execution model, such as allowing side effects, or whether the sequence of operations is defined by the execution model. Other paradigms are about the way code is organized, such as grouping into units that include both state and behavior. Yet others are about syntax and grammar";
        cf.AnyCodeMethod(msg);
    }
}