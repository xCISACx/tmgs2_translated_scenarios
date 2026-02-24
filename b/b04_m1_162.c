section "b04_m1_162"{
    int var0 = Date_GetDateOption(2, 46);
    if (var0 == 0){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_NE420_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401162_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Ehh...\nEven though they're called token\ngames, there are a variety of things\nto do here.");
        Message_MsgSel("I'm excited!", "Alright, leave it to me!", "Let's get lots of candy.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401162_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Well. It's not like I'm not.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("B0401162_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "... No, I'll do it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401162_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Ah, that's a good idea.\nWe have to at least get our money's\nworth.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 4);
        Background_Bg_GS2("BG_NE420_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401162_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Apart from luck, do you think you\nneed anything else to play on slot\nmachines?");
        Message_MsgSel("Kinetic vision, perhaps.", "Spirit, fighting spirit!", "It depends on the machine's settings.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401162_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Eh...\nCan your eyes see trends or\nsomething?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401162_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "You're really into it, aren't you?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(1, 2, (#1), 1);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0401162_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "What are you...\nan expert at slot machine games?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 1);
        Background_Bg_GS2("BG_NE420_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401162_A00800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Blackjack and poker are battles of\nwits, right?\nI wonder if it's any fun playing\nagainst a machine.");
        Message_MsgSel("It'll be fine if you aim for a bust.", "It's a battle with the person inside of you.", "You know a lot, ｛Saeki＊＊｝...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401162_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Or something like that.\nYou know a lot...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(1, 2, (#1), 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0401162_A01000", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Sorry for breaking your dreams,\nokay?\nThere isn't such a person inside of\nme, okay?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0401162_A01100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Ah, the person inside you, huh!\nThe guy who's 3cm tall and wears a\npointy hat.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah! With pointed shoes!");
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0401162_A01200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Hey.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Tee hee!");
                Message_Who(1);
                Message_MsgDisp("Saeki", ".........");
                Message_Who(0);
                Message_MsgDisp("主人公", "H-Huh? Umm～...");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 0);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0401162_A01400", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "I'll forgive you because you were a\nlittle cute.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Saeki＊＊｝...)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401162_A01500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Maybe.\nWell I'm actually saying what I\nheard the customers at Sangosho\nsaying.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
