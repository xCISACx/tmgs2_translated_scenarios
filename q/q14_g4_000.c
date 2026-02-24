section "q14_g4_000"{
    Background_Bg_GS2("BG_SCB20_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(13);
    Message_MsgDisp("Mizushima", "｛主人公｝.");
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(13, "G4_01F", 0);
    Message_Who(0);
    Message_MsgDisp("主人公", "Oh, ｛Mizushima＊＊｝.");
    Character_ChFace(0, 0, 10);
    Character_BlinkStart(13, 2, (#1));
    Voice_PlayVoice("Q0513000_M00000", #1, "");
    Message_Who(13);
    Message_MsgDisp("Mizushima", "Hey, today's our free day.\nDo you want to go see places\ntogether?");
    Message_MsgSel("Yeah, sounds good!", "... I'm sorry.");
    switch (Message_TextSelect()){
        case 0:
        Character_BlinkStart(13, 3, (#1));
        Voice_PlayVoice("Q0513000_M00100", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "Okay. Great!\nWell then, shall we get going?");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_GlobalWork(0, 2, 1);
        System_GlobalWork(2, 2, 13);
        System_Call_GS2("Q16", "G4", 0);
        System_Call_GS2("Q17", "G4", 0);
        break ;
        case 1:
        Character_ChFace(0, 0, 9);
        Character_BlinkStart(13, 2, (#1));
        Voice_PlayVoice("Q0513000_M00200", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "I see... Okay. Don't worry about it.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(She took the trouble to invite me.\nI wonder if I made the wrong\nchoice...)");
        Character_Chara_GS2(13, "NON");
        System_GlobalWork(3, 0, 1);
        break ;
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(13, 86, 1);
    }
