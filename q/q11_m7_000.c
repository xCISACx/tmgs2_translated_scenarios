section "q11_m7_000"{
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(7, "M7_17F", 0);
    Background_Bg_GS2("BG_SCB20_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetCh1Param(7, 130) == 3){
        Voice_PlayVoice("", 7, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, ｛Wakaouji＊＊｝.\nGood morning!");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("Q0207000_G00000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Good morning.\nHave you decided what to do for free\nday?\nYou don't appear to have anything\nscheduled, yet.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, that's right!\nWhat should I do...");
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("Q0207000_G00100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "*Sighs* Well then, shall you and\nSensei visit places?");
        Message_MsgSel("Yes, please!", "Umm... I'll decline.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("Q0207000_G00200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Okay. Well then, go get ready.\nWe'll get going soon.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay!");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_GlobalWork(0, 2, 1);
            System_GlobalWork(2, 2, 7);
            System_Call_GS2("Q16", "M7", 0);
            System_Call_GS2("Q17", "M7", 0);
            break ;
            case 1:
            Voice_PlayVoice("Q0207000_G00300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Really... It's all right.\nWell then, take care and have a nice\nday.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Maybe I should have gone with him\nafter all...)");
            break ;
            }
        }
    else if (Parameter_GetCh1Param(7, 130) >= 4){
        Voice_PlayVoice("", 7, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, ｛Wakaouji＊＊｝.\nGood morning!");
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("Q0207000_G00400", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Hey there, good morning.\nDo you have any plans for free\nactivity day?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Nope!\nI haven't put any thought into it,\nyet...");
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(7, 3, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("Q0207000_G00500", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "*Sigh*...\nYou are truly an embarrassing\nstudent.");
        Message_Who(0);
        Message_MsgDisp("主人公", "I'm sorry...");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("Q0207000_G00600", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "However, since I have yet to plan\neither, I'm an embarrassing\nteacher....\nDo you want to visit places with me?");
        Message_MsgSel("Yes, thank you!", "Umm... I'll decline.");
        switch (Message_TextSelect()){
            case 0:
            Voice_PlayVoice("Q0207000_G00700", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Very well....\nIt's not a great plan, so don't\nexpect too much.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay!");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_GlobalWork(0, 2, 1);
            System_GlobalWork(2, 2, 7);
            System_Call_GS2("Q16", "M7", 10);
            System_Call_GS2("Q17", "M7", 0);
            break ;
            case 1:
            Voice_PlayVoice("Q0207000_G00800", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Really...\nOkay, well then, take care.\nTry not to get lost.");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("Q0207000_G00900", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Either way, Sensei seems to be the\none lost.\nHave a nice day.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Maybe I should have gone with him\nafter all...)");
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(7, 86, 1);
    }
