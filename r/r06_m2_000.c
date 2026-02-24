section "r06_m2_000"{
    int var0;
    SoundEffect_PlayStream(3, "SS_T_00_160_M00");
    Voice_PlayVoice("R0602000_W00000", #1, "");
    Message_Who(0);
    Message_MsgDisp("Santa", "Ho ho ho.\nI will give a present to you.\nMerry Christmas!");
    Message_Who(0);
    Message_MsgDisp("主人公", "(I wonder what I got...\nI'll open it.)");
    if (Parameter_GetSysParam(0) == 1){
        Message_Who(0);
        Message_MsgDisp("主人公", "(\"A Stocking Full of Sweets\")");
        Message_Who(0);
        Message_MsgDisp("主人公", "(How nostalgic! ...\nAh, the price tag is still attached.\nThis is...)");
        }
    else if (Parameter_GetSysParam(0) == 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "(\"A Mini Christmas Tree Set\")");
        Message_Who(0);
        Message_MsgDisp("主人公", "(There are two different-colored\ntrees...\nAh, the price tag is still attached!\nIs this perhaps...)");
        }
    else if (Parameter_GetSysParam(0) == 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "(\"A Christmas Cake Plush Toy\")");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Wow, it's so soft!\nIt feels nice to touch...)");
        }
    if (Parameter_GetCh1Param(2, 130) <= 2){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(2, "M2_12F", 0);
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Shiba＊＊｝.");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 4);
        Voice_PlayVoice("R0602000_B00100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... That's the present I brought.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh, is that so?\nAh, the present you're holding is\nwhat I brought,\n｛Shiba＊＊｝.");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 5);
        Voice_PlayVoice("R0602000_B00200", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Ehh.");
        }
    else if (Parameter_GetCh1Param(2, 130) == 3){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(2, "M2_12F", 0);
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Shiba＊＊｝.");
        Voice_PlayVoice("R0602000_B00300", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... That.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh?");
        Voice_PlayVoice("R0602000_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "That's the present I brought.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Really?\nAh, the present you're holding is\nthe one I brought,\n｛Shiba＊＊｝!");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(2, 3, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("R0602000_B00500", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "So this kinda thing does happen.");
        }
    else {
        Character_ChFace(0, 0, 11);
        Character_Chara_GS2(2, "M2_12F", 0);
        Voice_PlayVoice("", 2, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... ｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Shiba＊＊｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "... What's up? You're staring.");
        Voice_PlayVoice("R0602000_B00700", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "......... I was surprised.\nThe present I got is the one that\nyou brought.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh? Ah, you're right.");
        Message_Who(0);
        Message_MsgDisp("主人公", "...\nMeaning that the present I got was\nfrom you, ｛Shiba＊＊｝...?");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 5);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("R0602000_B00800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... Yeah. That's a relief....\nI bought the present with you in\nmind.");
        }
    if (System_GlobalWork(0, 1) == 1){
        var0 = 3;
        }
    else if (System_GlobalWork(0, 1) == 2){
        var0 = 4;
        }
    else if (System_GlobalWork(0, 1) == 3){
        var0 = 3;
        }
    else if (System_GlobalWork(0, 1) == 4){
        var0 = 3;
        }
    else if (System_GlobalWork(0, 1) == 5){
        var0 = 2;
        }
    else if (System_GlobalWork(0, 1) == 6){
        var0 = 3;
        }
    else if (System_GlobalWork(0, 1) == 7){
        var0 = 3;
        }
    else if (System_GlobalWork(0, 1) == 8){
        var0 = 2;
        }
    else if (System_GlobalWork(0, 1) == 9){
        var0 = 3;
        }
    else if (System_GlobalWork(0, 1) == 10){
        var0 = 4;
        }
    else if (System_GlobalWork(0, 1) == 11){
        var0 = 4;
        }
    else if (System_GlobalWork(0, 1) == 12){
        var0 = 1;
        }
    if (var0 == 1){
        Character_ChFace(0, 0, 10);
        if (Parameter_GetCh1Param(2, 130) <= 2){
            Voice_PlayVoice("R0602000_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... You know what I like. Thanks.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay! He looked really happy.)");
            }
        else {
            Voice_PlayVoice("R0602000_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nI didn't think I'd be able to get\nsomething like this.\nThanks. I'll take good care of it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay! He looked really happy.)");
            }
        }
    else if (var0 == 2){
        Character_ChFace(0, 0, 3);
        Character_BlinkStart(2, 2, (#1));
        Character_ChFace(0, 3, 3);
        if (Parameter_GetCh1Param(2, 130) <= 2){
            Voice_PlayVoice("R0602000_B01100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Ehh... This is nice. Thanks.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah, he looked quite happy.)");
            }
        else {
            Voice_PlayVoice("R0602000_B01200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "This is nice.\nI'll take care of it.... Thanks.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah, he looked quite happy.)");
            }
        }
    else if (var0 == 3){
        Character_ChFace(0, 0, 3);
        if (Parameter_GetCh1Param(2, 130) <= 2){
            Voice_PlayVoice("R0602000_B01300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nSo there are these kind of presents.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah, he looked relatively happy...\nRight?)");
            }
        else {
            Voice_PlayVoice("R0602000_B01400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Ehh... This is kinda good. Thanks.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah, he looked relatively happy.)");
            }
        }
    else if (var0 == 4){
        if (Parameter_GetCh1Param(2, 130) <= 2){
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("R0602000_B01500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "............");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm...\nHe didn't look too happy about it.)");
            }
        else {
            Character_ChFace(0, 0, 9);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("R0602000_B01600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... This isn't suitable for me.\nAnyway... Thanks.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm...\nHe didn't look too happy about it.)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(2, 61, 3);
    Parameter_AddCh1Param(2, 60, 5);
    Parameter_AddCh1Param(2, 62, #5);
    Parameter_AddCh1Param(2, 86, 1);
    }
