section "t03_g4_000"{
    int var0 = Parameter_GetPl1Param(15);
    Message_Epilog_Text(3, 0);
    int var1;
    switch (var0){
        case 1:
        Message_Who(0);
        Message_MsgDisp("　　　", "After graduation, I entered a 1st\nrate university, just as I had\nhoped.\nMy student life is fun.");
        var1 = 5;
        break ;
        case 2:
        Message_Who(0);
        Message_MsgDisp("　　　", "After graduation, I entered a 2nd\nrate university.\nMy student life is fun.");
        var1 = 5;
        break ;
        case 3:
        Message_Who(0);
        Message_MsgDisp("　　　", "After graduation, I entered a 3rd\nrate university.\nMy student life is fun.");
        var1 = 5;
        break ;
        case 4:
        Message_Who(0);
        Message_MsgDisp("　　　", "After graduation, I was employed by\na 1st rate company.\nEven if I'm busy, it is enriching.");
        var1 = 6;
        break ;
        case 5:
        Message_Who(0);
        Message_MsgDisp("　　　", "After graduation, I was employed by\na 2nd rate company.\nEven if I'm busy, it is enriching.");
        var1 = 6;
        break ;
        case 6:
        Message_Who(0);
        Message_MsgDisp("　　　", "After graduation, I was employed by\na 3rd rate company.\nEven if I'm busy, it is enriching.");
        var1 = 6;
        break ;
        case 7:
        Message_Who(0);
        Message_MsgDisp("　　　", "I'm currently attending prep school.\nI'm aiming to pass the university\nentrance exams!");
        var1 = 4;
        break ;
        case 8:
        Message_Who(0);
        Message_MsgDisp("　　　", "After graduation, I became a\nfreeter.");
        var1 = 3;
        break ;
        case 9:
        Message_Who(0);
        Message_MsgDisp("　　　", "After graduation, I entered a\nvocational school.");
        var1 = 4;
        break ;
        case 10:
        Message_Who(0);
        Message_MsgDisp("　　　", "I am currently studying to become an\nillustrator.\nThere is still a long way to go.");
        var1 = 5;
        break ;
        case 11:
        Message_Who(0);
        Message_MsgDisp("　　　", "After graduation, I was employed in\nthe media field.\nEven if it's tough, it is enriching.");
        var1 = 5;
        break ;
        case 12:
        Message_Who(0);
        Message_MsgDisp("　　　", "Right now, I am doing special\ntraining to become the #1 athlete.\nThere is still a long way to go.");
        var1 = 5;
        break ;
        case 13:
        Message_Who(0);
        Message_MsgDisp("　　　", "After graduation, I became a nursery\nschool teacher.\nEven if the kids are noisy, it is\nenriching.");
        var1 = 6;
        break ;
        case 14:
        Message_Who(0);
        Message_MsgDisp("　　　", "After graduation, I was scouted and\nI'm now training for my showbiz\ndebut.\nI aim to be the #1 talent!");
        var1 = 6;
        break ;
        case 15:
        Message_Who(0);
        Message_MsgDisp("　　　", "After graduation, I entered a 1st\nrate Sports university on a\nrecommendation.\nMy student life is fun.");
        var1 = 4;
        break ;
        case 17:
        Message_Who(0);
        Message_MsgDisp("　　　", "After graduation, I was scouted and\nam now working for a 1st rate\ncompany.\nI aim to be the #1 cheerleader!");
        var1 = 5;
        var1 = 5;
        break ;
        case 19:
        Message_Who(0);
        Message_MsgDisp("　　　", "After graduation, I joined KCH\nOrchestra.\nEvery day is devoted to practice.");
        var1 = 4;
        break ;
        case 18:
        Message_Who(0);
        Message_MsgDisp("　　　", "After graduation, I entered a 1st\nrate Arts university on a\nrecommendation.\nMy student life is fun.");
        var1 = 4;
        break ;
        case 20:
        Message_Who(0);
        Message_MsgDisp("　　　", "After graduation, I became a fashion\ndesigner.\nAlthough it is tough, it's a job\nworth doing.");
        var1 = 6;
        break ;
        case 21:
        Message_Who(0);
        Message_MsgDisp("　　　", "After graduation, I entered a 1st\nrate university as a scholarship\nstudent.\nMy student life is fun.");
        var1 = 4;
        break ;
        case 24:
        Message_Who(0);
        Message_MsgDisp("　　　", "After graduation, I became a full\ntime employee at the select shop.\nThe days are enriching.");
        var1 = 6;
        break ;
        case 26:
        Message_Who(0);
        Message_MsgDisp("　　　", "After graduation, I became a full\ntime employee at the gas station.\nThe days are enriching.");
        var1 = 6;
        break ;
        case 25:
        Message_Who(0);
        Message_MsgDisp("　　　", "After graduation, I became a full\ntime employee at the florist.\nThe days are enriching.");
        var1 = 5;
        break ;
        case 23:
        Message_Who(0);
        Message_MsgDisp("　　　", "After graduation, I became a full\ntime employee at the confectionary\nstore.\nThe days are enriching.");
        var1 = 5;
        break ;
        case 22:
        Message_Who(0);
        Message_MsgDisp("　　　", "After graduation, I became a full\ntime employee at the instrument\nstore.\nThe days are enriching.");
        var1 = 5;
        break ;
        case 27:
        Message_Who(0);
        Message_MsgDisp("　　　", "After graduation, I became a full\ntime employee at the game developing\ncompany.\nThe days are enriching.");
        var1 = 6;
        break ;
        default :
        Message_Who(0);
        Message_MsgDisp("　　　", "I didn't decide on my future\ncareer...\nI have to hurry and find something!");
        var1 = 4;
        break ;
        }
    Message_Epilog_Text(var1 + 4, 0);
    System_Call_GS2("T03", "G4", 400);
    System_Call_GS2("T03", "G1", 234);
    System_GlobalWork(3, 0, 0);
    }
