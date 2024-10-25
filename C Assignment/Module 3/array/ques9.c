//              Difference between Structure and Union

// In C, structures and unions are both USER DEFINED data types that can store MULTIPLE data types
// The Major difference between Structure And Union Is they differ in how they use memory.
// In the case of a Structure, there is a specific memory location for every input data member.
// It can store multiple values of the various members.
// In the case of a Union, there is an allocation of only one memory of highest datatype.
// Union Stores Only Highest Frequency datatype and along with that it gives garbage value for other data members.
// STRUCTUE stores multiple data types of DIFFERENT SIZES, While UNION stores multiple data types of the SAME SIZE.
// To declare a Structure the keyword 'struct' is used. Whereas To declare a Union the keyword 'union’ is used.
// A structure allows accessing and retrieving any data member at a time. Whereas A union allows retrieving only
// one data member at a time.


//         SYNTAX OF STRUCTURE
//  struct Structure_Name{
//  Member1,
//  Member2,
//  };

//         SYNTAX OF UNION
//  union Union_Name{
//  Member1,
//  Member2,
//  };

// CONCLUSION : Structures are HANDY when you need separate storage.



The Major difference between Structure And Union Is they differ in how they use memory.
STRUCTUE stores multiple data types of DIFFERENT SIZES, While UNION stores multiple data types of the SAME SIZE.
To declare a Structure the keyword 'struct' is used. Whereas To declare a Union the keyword 'union’ is used.