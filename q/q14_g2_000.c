section "q14_g2_000"{
    Background_Bg_GS2("BG_SCB20_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(11);
    Message_MsgDisp("Onoda", "｛主人公｝.");
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(11, "G2_01F", 0);
    Message_Who(0);
    Message_MsgDisp("主人公", "Ah, ｛Onoda＊＊｝.");
    Character_ChFace(0, 0, 10);
    Voice_PlayVoice("Q0511000_K00000", #1, "");
    Message_Who(11);
    Message_MsgDisp("Onoda", "Today is a free day.\nWe can visit places together if\nyou'd like.");
    Message_MsgSel("Yes, sounds good!", "... I'm sorry.");
    switch (Message_TextSelect()){
        case 0:
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(11, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("Q0511000_K00100", #1, "");
        Message_Who(11);
        Message_MsgDisp("Onoda", "Great!\nWell then, the two of us will enjoy\ntoday to our hearts' content!");
        Voice_PlayVoice("Q0511000_K00200", #1, "");
        Message_Who(11);
        Message_MsgDisp("Onoda", "Let's go.... Come, quickly!");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_GlobalWork(0, 2, 1);
        System_GlobalWork(2, 2, 11);
        System_Call_GS2("Q16", "G2", 0);
        System_Call_GS2("Q17", "G2", 0);
        break ;
        case 1:
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(11, 2, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("Q0511000_K00300", #1, "");
        Message_Who(11);
        Message_MsgDisp("Onoda", "... I see.\nWell then, I'll try looking for\nother people.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(She took the trouble to invite me.\nI wonder if I made the wrong\nchoice...)");
        System_GlobalWork(3, 0, 1);
        break ;
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(11, 86, 1);
    }
