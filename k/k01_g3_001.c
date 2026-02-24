section "k01_g3_001"{
    Character_BlinkStart(12, 1, (#1), 1);
    Character_BlinkStart(12, 1, (#1), 2);
    Character_ChFace(0, 0, 0);
    Character_ChFace(1, 0, 0);
    Background_Bg_GS2("BG_SC210_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetCh1Param(12, 513) != 1){
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Nishimoto＊＊｝.");
        Music_PlayBGM(0, "MN_C_12_000_D00", 127, 40);
        Character_Chara_GS2(12, "G3_01F", 0);
        Voice_PlayVoice("K0112000_L00000", #1, "K0112000_L00001");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "Ah, ｛主人公｝!\nWhat is it? What's up?\nYou need something from me?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Here, a birthday present! Open it.");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Nishimoto＊＊｝.");
        Music_PlayBGM(0, "MN_C_12_000_D00", 127, 40);
        Character_Chara_GS2(12, "G3_01F", 0);
        Voice_PlayVoice("K0112000_L00100", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "Eh, what?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Here, a birthday present!");
        }
    if (Parameter_GetCh1Param(12, 67) == 1){
        if (Parameter_GetCh1Param(12, 513) != 1){
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("K0112000_L00200", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Wah, are you serious!\nWow, I'm so happy! Is this for real?");
            Character_BlinkStart(12, 3, (#1));
            Voice_PlayVoice("", #1, "K0112000_L00300");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "｛主人公｝...!!\nYou're a really good kid. Thanks!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(She looks happy! Thank gosh...!)");
            }
        else {
            Character_BlinkStart(12, 2, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("K0112000_L00400", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "...\nYou're greatly mistaken if you think\nt-this will make me happy!");
            Character_BlinkStart(12, 3, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("K0112000_L00500", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "............ .........\nI'll just accept it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "???");
            Character_ChFace(0, 0, 8);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("K0112000_L00600", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "... Thanks. L-Later!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah, she looks relatively happy.\nThank gosh!)");
            }
        Parameter_AddCh1Param(12, 60, 3);
        }
    else if (Parameter_GetCh1Param(12, 67) == 2){
        if (Parameter_GetCh1Param(12, 513) != 1){
            Character_ChFace(0, 0, 3);
            Character_BlinkStart(12, 2, (#1));
            Voice_PlayVoice("K0112000_L00700", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Yeah, it's nice.\nThanks, ｛主人公｝.");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(12, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah, she looks relatively happy.\nThank gosh!)");
            }
        else {
            Character_BlinkStart(12, 3, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("K0112000_L00800", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "......... Thanks.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah, she looks relatively happy.\nThank gosh!)");
            }
        Parameter_AddCh1Param(12, 60, 2);
        }
    else if (Parameter_GetCh1Param(12, 67) == 3){
        if (Parameter_GetCh1Param(12, 513) != 1){
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("K0112000_L00900", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Haha... Thanks.\nI wanna say something, even though\nI'm the one getting a present.");
            Character_BlinkStart(12, 3, (#1));
            Voice_PlayVoice("K0112000_L01000", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Shouldn't you brush up on your sense\na little more?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(It looks like she wasn't that happy\nabout it...)");
            }
        else {
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("K0112000_L01100", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "............ ......... This.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Crap!\nIt looks like I gave her something\nshe doesn't like...)");
            }
        Parameter_AddCh1Param(12, 60, 1);
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Parameter_AddCh1Param(12, 86, 1);
    }
