section "b02_m5_010"{
    if (Date_GetDateOption(4) == 1){
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 4);
        Voice_PlayVoice("B0205010_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "... This is bad～.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh, what? What's wrong?");
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 4);
        Voice_PlayVoice("B0205010_E00100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "A surprise attack...");
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(5, 2, (#1));
        Character_ChFace(0, 3, 5);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("B0205010_E00200", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Wah, what should I do?\nI'm getting really embarrassed.");
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(5, 2, (#1), 1);
        Character_ChFace(0, 3, 4);
        Voice_PlayVoice("B0205010_E00300", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Why is this happening...?\nI wanted to see more of you, too～!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It seems like ｛Chris＊＊｝\nlikes this swimsuit!\nThank gosh!)");
        Message_CloseMsg();
        Character_Chara_GS2(5, "M5_09F", 0, 1, 0);
        Parameter_AddCh1Param(5, 61, 2);
        Parameter_AddCh1Param(5, 60, 1);
        Parameter_AddCh1Param(5, 62, #2);
        }
    else if (Date_GetDateOption(4) == 2){
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(5, 3, (#1));
        Character_ChFace(0, 3, 4);
        Voice_PlayVoice("B0205010_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Bad... That is bad～...");
        Message_Who(0);
        Message_MsgDisp("主人公", "W-What's wrong?");
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(5, 2, (#1));
        Character_ChFace(0, 3, 5);
        Voice_PlayVoice("B0205010_E00500", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "I said I'm bad...\nBecause I didn't go out shopping\nwith you...");
        Character_BlinkStart(5, 0, (#1), 1);
        Character_ChFace(0, 3, 1);
        Voice_PlayVoice("B0205010_E00600", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "If I had chosen, I would have chosen\na swimsuit that would make you more\nbeautiful...!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It seems like ｛Chris＊＊｝\ndoesn't like this swimsuit...)");
        Message_CloseMsg();
        Character_Chara_GS2(5, "M5_09F", 0, 1, 0);
        Parameter_AddCh1Param(5, 61, #1);
        Parameter_AddCh1Param(5, 60, 0);
        Parameter_AddCh1Param(5, 62, 1);
        }
    }
