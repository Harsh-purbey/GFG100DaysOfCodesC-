class Sol
{
    int countCamelCase (String s)
    {
        // your code here 
        return s.replaceAll("[a-z]+", "").length();
    }
    }
}