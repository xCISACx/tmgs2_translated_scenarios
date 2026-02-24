section "r06_m3_000"{
    int var0;
    SoundEffect_PlayStream(3, "SS_T_00_160_M00");
    Voice_PlayVoice("R0603000_W00000", #1, "");
    Message_Who(0);
    Message_MsgDisp("Santa", "Ho ho ho.\nI will give a present to you.\nMerry Christmas!");
    Message_Who(0);
    Message_MsgDisp("主人公", "(I wonder what I got..\nI'll open it.)");
    if (Parameter_GetSysParam(0) == 1){
        Message_Who(0);
        Message_MsgDisp("主人公", "(\"Corked Star Bottle of Sand\")");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Teehee...\nThe sand really is shaped like a\nstar...)");
        }
    else if (Parameter_GetSysParam(0) == 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "(\"3D Crystal Art\")");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Amazing!\nThe tree on the inside looks\nthree-dimensional!)");
        }
    else if (Parameter_GetSysParam(0) == 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "(\"Silk Screen [Night Sky]\")");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ooh, wonderful...\nMaybe I'll put it in my room for\ndecoration.)");
        }
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(3, "M3_12F", 0);
    if (Parameter_GetCh1Param(3, 130) <= 2){
        Voice_PlayVoice("", 3, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, ｛Hikami＊＊｝.");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("R0603000_C00100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I came over to see you.\nThat is what I brought.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh, really!?\nAh, ｛Hikami＊＊｝ got the\npresent I brought.");
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("R0603000_C00200", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Hmm, what an amazing probability....\nI will open it.");
        }
    else if (Parameter_GetCh1Param(3, 130) == 3){
        Voice_PlayVoice("", 3, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝.");
        Character_ChFace(0, 2, 4);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("R0603000_C00300", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "That present you have...\nI have no doubt that, that is what I\nbrought.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh, really!?\nAh, ｛Hikami＊＊｝ got the\npresent I brought.");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(3, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("R0603000_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Two people changed the large-scale\nprobability of exchanging.\nI will open it at once.");
        }
    else {
        Voice_PlayVoice("", 3, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝.");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(3, 2, (#1));
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("R0603000_C00500", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nThat is the present that I\nbrought....\nGood, what a nice coincidence.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh, really!?\nAh, the gift ｛Hikami＊＊｝\nhas is the present that I brought.");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(3, 3, (#1));
        Voice_PlayVoice("R0603000_C00600", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nWe must express our gratitude to the\nclever Santa.\nThen I will open it at once.");
        }
    if (System_GlobalWork(0, 1) == 1){
        var0 = 3;
        }
    else if (System_GlobalWork(0, 1) == 2){
        var0 = 4;
        }
    else if (System_GlobalWork(0, 1) == 3){
        var0 = 2;
        }
    else if (System_GlobalWork(0, 1) == 4){
        var0 = 2;
        }
    else if (System_GlobalWork(0, 1) == 5){
        var0 = 3;
        }
    else if (System_GlobalWork(0, 1) == 6){
        var0 = 3;
        }
    else if (System_GlobalWork(0, 1) == 7){
        var0 = 1;
        }
    else if (System_GlobalWork(0, 1) == 8){
        var0 = 3;
        }
    else if (System_GlobalWork(0, 1) == 9){
        var0 = 2;
        }
    else if (System_GlobalWork(0, 1) == 10){
        var0 = 2;
        }
    else if (System_GlobalWork(0, 1) == 11){
        var0 = 4;
        }
    else if (System_GlobalWork(0, 1) == 12){
        var0 = 4;
        }
    if (var0 == 1){
        Character_ChFace(0, 0, 11);
        Character_ChFace(0, 3, 3);
        if (Parameter_GetCh1Param(3, 130) <= 2){
            Voice_PlayVoice("R0603000_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... A good present.\nI will have to use this immediately.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hooray! He seemed happy. Good.)");
            }
        else {
            Voice_PlayVoice("R0603000_C00800", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... This is a nice present.\nIt was a wonderful one to buy, thank\nyou.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hooray! He seemed happy. Good.)");
            }
        }
    else if (var0 == 2){
        Character_ChFace(0, 0, 10);
        if (Parameter_GetCh1Param(3, 130) <= 2){
            Voice_PlayVoice("R0603000_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... This is quite a nice present.\nI accept it with thanks.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! He seemed quite pleased.)");
            }
        else {
            Voice_PlayVoice("R0603000_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... This is quite a nice gift.\nThank you for choosing it, it was a\ngood choice.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! He seemed quite pleased.)");
            }
        }
    else if (var0 == 3){
        Character_ChFace(0, 0, 3);
        if (Parameter_GetCh1Param(3, 130) <= 2){
            Voice_PlayVoice("R0603000_C01100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... I see. Thank you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Okay, he seemed fairly pleased.)");
            }
        else {
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("R0603000_C01200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... Thank you.\nI will use it another time.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Okay, he seemed fairly pleased.)");
            }
        }
    else if (var0 == 4){
        if (Parameter_GetCh1Param(3, 130) <= 2){
            Character_ChFace(0, 0, 8);
            Character_BlinkStart(3, 3, (#1));
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("R0603000_C01300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nThis is not quite something that\nshould be bought for me.\nIt is something to expect from a\ngift exchange party.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(He didn't seem that pleased...)");
            }
        else {
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("R0603000_C01400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... Thank you.\nThis is not quite something that\nshould be bought for me.\nThe gift exchange party was not a\nthrill.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(He didn't seem that pleased...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(3, 61, 3);
    Parameter_AddCh1Param(3, 60, 5);
    Parameter_AddCh1Param(3, 62, #5);
    Parameter_AddCh1Param(3, 86, 1);
    }
