section "k01_g1_001"{
    Character_BlinkStart(10, 1, (#1), 1);
    Character_BlinkStart(10, 1, (#1), 2);
    Character_ChFace(0, 0, 0);
    Character_ChFace(1, 0, 0);
    Background_Bg_GS2("BG_SC210_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetCh1Param(10, 513) != 1){
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Toudou＊＊｝.");
        Music_PlayBGM(0, "MN_C_10_000_D00", 127, 40);
        Character_Chara_GS2(10, "G1_01F", 0);
        Voice_PlayVoice("K0110000_J00000", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "Ah... it's you. You need something?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Here, a birthday present!");
        Character_ChFace(0, 2, 4);
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("K0110000_J00100", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "To me...?\nWhat the, that's surprising.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Haha, it's fine. Open it!");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Toudou＊＊｝.");
        Music_PlayBGM(0, "MN_C_10_000_D00", 127, 40);
        Character_Chara_GS2(10, "G1_01F", 0);
        Voice_PlayVoice("K0110000_J00200", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "... What.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Here, a birthday present! Open it.");
        Character_BlinkStart(10, 2, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("K0110000_J00300", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "I'll accept it, if you're giving it\nto me.");
        }
    if (Parameter_GetCh1Param(10, 67) == 1){
        if (Parameter_GetCh1Param(10, 513) != 1){
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("K0110000_J00400", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "This is nice. I like it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(She looks happy. I'm glad...!)");
            }
        else {
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("K0110000_J00500", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "Ah...");
            Message_Who(0);
            Message_MsgDisp("主人公", "I thought that you would like it,\n｛Toudou＊＊｝.");
            Character_ChFace(0, 7, 0);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 2);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("K0110000_J00600", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "... Thanks.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(She looks happy. That's great...!)");
            }
        Parameter_AddCh1Param(10, 60, 3);
        }
    else if (Parameter_GetCh1Param(10, 67) == 2){
        if (Parameter_GetCh1Param(10, 513) != 1){
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("K0110000_J00700", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "Sorry for making you go outta your\nway to get me something.");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(10, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah, she looks relatively happy.\nThank goodness.)");
            }
        else {
            Character_ChFace(0, 0, 3);
            Character_BlinkStart(10, 3, (#1));
            Voice_PlayVoice("K0110000_J00800", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "... Thanks.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah, she looks relatively happy.\nI'm so relieved.)");
            }
        Parameter_AddCh1Param(10, 60, 2);
        }
    else if (Parameter_GetCh1Param(10, 67) == 3){
        if (Parameter_GetCh1Param(10, 513) != 1){
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("K0110000_J00900", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "Do you like this kinda thing? Hmm...\nthanks.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(It looks like she wasn't that happy\nabout it...)");
            }
        else {
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("K0110000_J01000", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "............ ...............");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Crap!\nIt looks like I gave her something\nshe doesn't like.)");
            }
        Parameter_AddCh1Param(10, 60, 1);
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Parameter_AddCh1Param(10, 86, 1);
    }
