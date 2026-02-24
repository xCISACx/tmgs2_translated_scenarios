section "r06_m4_000"{
    int var0;
    SoundEffect_PlayStream(3, "SS_T_00_160_M00");
    Voice_PlayVoice("R0604000_W00000", #1, "");
    Message_Who(0);
    Message_MsgDisp("Santa", "Ho ho ho.\nI will give a present to you.\nMerry Christmas!");
    Message_Who(0);
    Message_MsgDisp("主人公", "(I wonder what I got...\nI'll open it.)");
    if (Parameter_GetSysParam(0) == 1){
        Message_Who(0);
        Message_MsgDisp("主人公", "(\"Signed Pick Set\")");
        Message_Who(0);
        Message_MsgDisp("主人公", "(... \"Harry\" is written on them.\nI don't even have to guess who this\nis from...)");
        }
    else if (Parameter_GetSysParam(0) == 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "(\"CD of Christmas Rock Songs\")");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Rock version of Christmas songs...\nI wonder what they sound like.\nI can't wait to listen to it!)");
        }
    else if (Parameter_GetSysParam(0) == 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "(\"Christmas Song Music Box\")");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ah, you wind it yourself.\nHaha, it's small and cute!)");
        }
    if (Parameter_GetCh1Param(4, 130) <= 2){
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(4, "M4_12F", 0);
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hariya＊＊｝.");
        Character_BlinkStart(4, 2, (#1));
        Voice_PlayVoice("R0604000_D00100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "That's the present I brought.\nYou're a lucky one.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Really?\nAh, the present you're holding is\nwhat I brought,\n｛Hariya＊＊｝.");
        Character_ChFace(0, 0, 0);
        Voice_PlayVoice("R0604000_D00200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Hmm...");
        }
    else if (Parameter_GetCh1Param(4, 130) == 3){
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(4, "M4_12F", 0);
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hariya＊＊｝.");
        Character_BlinkStart(4, 2, (#1));
        Voice_PlayVoice("R0604000_D00300", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "You've got some luck～.\nThat's the present I brought.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh, really!?\nAh, the present you're holding is\nwhat I brought,\n｛Hariya＊＊｝.");
        Character_ChFace(0, 0, 11);
        Voice_PlayVoice("R0604000_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "That's amazing...\nWe're being bestowed with luck\ninstead of snow or something?");
        }
    else {
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(4, "M4_12F", 0);
        Voice_PlayVoice("", 4, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hariya＊＊｝.");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("R0604000_D00500", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Awesome...\nThe present I brought here was given\nto you!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Really!?\nAh, the present you're holding is\nwhat I brought,\n｛Hariya＊＊｝.");
        Character_BlinkStart(4, 2, (#1));
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("R0604000_D00600", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "You serious...... Wah, crap...\nI'm smiling...");
        }
    if (System_GlobalWork(0, 1) == 1){
        var0 = 2;
        }
    else if (System_GlobalWork(0, 1) == 2){
        var0 = 2;
        }
    else if (System_GlobalWork(0, 1) == 3){
        var0 = 2;
        }
    else if (System_GlobalWork(0, 1) == 4){
        var0 = 4;
        }
    else if (System_GlobalWork(0, 1) == 5){
        var0 = 3;
        }
    else if (System_GlobalWork(0, 1) == 6){
        var0 = 2;
        }
    else if (System_GlobalWork(0, 1) == 7){
        var0 = 4;
        }
    else if (System_GlobalWork(0, 1) == 8){
        var0 = 3;
        }
    else if (System_GlobalWork(0, 1) == 9){
        var0 = 3;
        }
    else if (System_GlobalWork(0, 1) == 10){
        var0 = 2;
        }
    else if (System_GlobalWork(0, 1) == 11){
        var0 = 1;
        }
    else if (System_GlobalWork(0, 1) == 12){
        var0 = 2;
        }
    if (var0 == 1){
        Character_ChFace(0, 0, 11);
        Character_BlinkStart(4, 2, (#1));
        Character_ChFace(0, 3, 3);
        if (Parameter_GetCh1Param(4, 130) <= 2){
            Voice_PlayVoice("R0604000_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Oh, this is nice! Thanks!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay! He looked really happy!)");
            }
        else {
            Voice_PlayVoice("R0604000_D00800", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Huh... This is good!\nI really like this. Thanks!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay! He looked really happy!)");
            }
        }
    else if (var0 == 2){
        Character_ChFace(0, 0, 10);
        if (Parameter_GetCh1Param(4, 130) <= 2){
            Voice_PlayVoice("R0604000_D00900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Ah... This is nice. I like it.\nThanks.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, he looked relatively happy.)");
            }
        else {
            Voice_PlayVoice("R0604000_D01000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Oh, this is nice. Thanks!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, he looked relatively happy.)");
            }
        }
    else if (var0 == 3){
        Character_ChFace(0, 0, 3);
        if (Parameter_GetCh1Param(4, 130) <= 2){
            Voice_PlayVoice("R0604000_D01100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Ehh～. Thanks. I'll accept it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, he looked happy... I think?)");
            }
        else {
            Voice_PlayVoice("R0604000_D01200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "This kinda present is okay. Thanks.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, he looked happy... I think?)");
            }
        }
    else if (var0 == 4){
        if (Parameter_GetCh1Param(4, 130) <= 2){
            Character_ChFace(0, 0, 8);
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("R0604000_D01300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... What the hell is this?\nAnyway, I'll accept it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm...\nHe didn't look too happy about it.)");
            }
        else {
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("R0604000_D01400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "...\nHey you, what do you mean by this...\nWell, thanks.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm...\nHe didn't look too happy about it.)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(4, 61, 3);
    Parameter_AddCh1Param(4, 60, 5);
    Parameter_AddCh1Param(4, 62, #5);
    Parameter_AddCh1Param(4, 86, 1);
    }
