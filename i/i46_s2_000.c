section "i46_s2_000"{
    Background_Bg_GS2("BG_AR400_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetByParam(4, 52) <= 59){
        Message_Who(0);
        Message_MsgDisp("主人公", "(I think I've gotten the hang of\nworking here a bit.)");
        Character_Chara_GS2(15, "S2_01F", 0);
        Voice_PlayVoice("I4615000_O00000", #1, "");
        Message_Who(15);
        Message_MsgDisp("Hanatsubaki", "Daisy.\nYou seem to be doing well, lately▼");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, Princess Himeko!\nYes, I have been working hard!");
        Character_Chara_GS2(15, "NON");
        Character_Chara_GS2(15, "S2_19F", 0);
        Voice_PlayVoice("I4615000_O00100", #1, "");
        Message_Who(15);
        Message_MsgDisp("Hanatsubaki", "Amazing...\nDaisy, you are sparkling right now!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I was complimented by\nHimeko-senpai!)");
        }
    else if ((Parameter_GetByParam(4, 52) >= 60) && (Parameter_GetByParam(4, 52) <= 89)){
        Message_Who(0);
        Message_MsgDisp("主人公", "(Urgh～...\nIt's not going that well...)");
        Character_Chara_GS2(15, "S2_17F", 0);
        Voice_PlayVoice("I4615000_O00200", #1, "");
        Message_Who(15);
        Message_MsgDisp("Hanatsubaki", "Daisy!\nWhat is the matter with you and your\ndim-witted manner!?");
        Message_Who(0);
        Message_MsgDisp("主人公", "S-Sorry, Princess Himeko!");
        Character_Chara_GS2(15, "NON");
        Character_Chara_GS2(15, "S2_18F", 0);
        Voice_PlayVoice("I4615000_O00300", #1, "");
        Message_Who(15);
        Message_MsgDisp("Hanatsubaki", "You shouldn't be the target of\nHimeko's wrath, as well...");
        Character_Chara_GS2(15, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I made a mistake.\nI have to try harder!)");
        }
    else if (Parameter_GetByParam(4, 52) >= 90){
        Character_Chara_GS2(15, "S2_01F", 0);
        Voice_PlayVoice("I4615000_O00400", #1, "");
        Message_Who(15);
        Message_MsgDisp("Hanatsubaki", "Da-i-sy▼");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, Princess Himeko!");
        Voice_PlayVoice("I4615000_O00500", #1, "");
        Message_Who(15);
        Message_MsgDisp("Hanatsubaki", "Hehe... How are you?\nThanks to you, the store is becoming\nvery brilliant▼");
        Message_Who(0);
        Message_MsgDisp("主人公", "Really?");
        Character_Chara_GS2(15, "NON");
        Character_Chara_GS2(15, "S2_19F", 0);
        Voice_PlayVoice("I4615000_O00600", #1, "");
        Message_Who(15);
        Message_MsgDisp("Hanatsubaki", "Of course.\nIt seems like you are not the target\nof Himeko's wrath.\nAmazing, Daisy▼");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I was complimented by\nHimeko-senpai!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(15, 86, 1);
    }
