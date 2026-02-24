section "t03_m8_800"{
    if (System_GlobalWork(3, 1) == 89){
        Message_Epilog_Text(5, 1);
        if (Parameter_GetPl1Param(15) == 2){
            Message_Who(0);
            Message_MsgDisp("　　　", "Masaki-senpai is now in 4th year.\nHe does not seem too worried about\nhis future career, and is quite\nrelaxed.");
            Message_Epilog_Text(17, 0);
            Message_DispMsg(0);
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　");
            Message_Epilog_Clear(0);
            Message_Epilog_Text(3, 0);
            Message_DispMsg(1);
            Message_Who(0);
            Message_MsgDisp("　　　", "What surprised me was that he got a\nhold of recipes from the most\npopular cafe in uni and improved\nthem.");
            Message_Epilog_Text(10, 0);
            Message_Who(0);
            Message_MsgDisp("　　　", "When I said I wanted to try, he said\nthat they were simple to make and\ntaught me how to make it.\nMaybe I'll become good at cooking.");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("　　　", "Masaki-senpai is now in 4th year at\na 2nd rate university.\nHe does not seem worried about his\nfuture career.");
            Message_Epilog_Text(17, 0);
            Message_DispMsg(0);
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　");
            Message_Epilog_Clear(0);
            Message_Epilog_Text(3, 0);
            Message_DispMsg(1);
            Message_Who(0);
            Message_MsgDisp("　　　", "He told me that he got a hold of the\nrecipes from the most popular cafe\nin university and improved them.");
            Message_Epilog_Text(10, 0);
            Message_Who(0);
            Message_MsgDisp("　　　", "When I said I wanted to try, he said\nthat they were simple to make and\ntaught me how to make it.\nMaybe I'll become good at cooking.");
            }
        }
    else {
        Message_Who(0);
        Message_MsgDisp("　　　", "Masaki-senpai goes to.\nHe is now in 4th year.\nHe's not worried about his future\ncareer.\nHe got a hold of some recipes from\nthe uni cafe and improved them.");
        Message_Epilog_Text(17, 0);
        Message_DispMsg(0);
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　");
        Message_Epilog_Clear(0);
        Message_Epilog_Text(4, 0);
        Message_DispMsg(1);
        Message_Who(0);
        Message_MsgDisp("　　　", "When I say I want to try it, he says\nhe'll let me try it, so I should\ncome over.\nGoing over to his place for the\nfirst time to have lunch sounds like\nfun.\nMaybe I should make dessert.");
        }
    }
