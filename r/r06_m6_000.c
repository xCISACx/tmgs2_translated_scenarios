section "r06_m6_000"{
    int var0;
    SoundEffect_PlayStream(3, "SS_T_00_160_M00");
    Voice_PlayVoice("R0606000_W00000", #1, "");
    Message_Who(0);
    Message_MsgDisp("Santa", "Ho ho ho. I will give you a present.\nMerry Christmas!");
    Message_Who(0);
    Message_MsgDisp("主人公", "(I wonder what I got..\nI'll open it.)");
    if (Parameter_GetSysParam(0) == 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "(\"Ceramic Teaspoons\")");
        Message_Who(0);
        Message_MsgDisp("主人公", "(The floral design is lovely～.\nI will use this next time I drink\ntea.)");
        }
    else if (Parameter_GetSysParam(0) == 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "(\"Silver Salad Forks\")");
        Message_Who(0);
        Message_MsgDisp("主人公", "(These are too beautiful to use...\nThe design is also wonderful.\nOh, this person must be a famous\ndesigner.)");
        }
    if (Parameter_GetCh1Param(6, 130) <= 2){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(6, "M6_12F", 0);
        Voice_PlayVoice("", 6, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Amachi＊＊｝.");
        Character_ChFace(0, 0, 11);
        Voice_PlayVoice("R0606000_F00100", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Ah, it's...\nThat's the present I brought.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Heehee, it is?\nAh, ｛Amachi＊＊｝ is the guy\nwho got the present I brought.");
        }
    else if (Parameter_GetCh1Param(6, 130) == 3){
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 5);
        Character_Chara_GS2(6, "M6_12F", 0);
        Voice_PlayVoice("", 6, "R0606000_F00200");
        Message_Who(6);
        Message_MsgDisp("Amachi", "｛主人公｝.\nHey, what gift did you get?");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Amachi＊＊｝.");
        Character_ChFace(0, 0, 11);
        Voice_PlayVoice("R0606000_F00300", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Aah! That's the present I brought!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh, really!?\nAh, ｛Amachi＊＊｝ is the guy\nwho got the present I brought.");
        }
    else {
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Character_Chara_GS2(6, "M6_12F", 0);
        Voice_PlayVoice("", 6, "R0606000_F00400");
        Message_Who(6);
        Message_MsgDisp("Amachi", "｛主人公｝.\nThere you are, I was looking for\nyou.");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Amachi＊＊｝.");
        Character_ChFace(0, 0, 11);
        Voice_PlayVoice("R0606000_F00500", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Ah... That present!\nI'm the guy who brought it!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Really!?\nAh, ｛Amachi＊＊｝ is the guy\nwho got the present I brought.");
        Character_ChFace(0, 0, 10);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("R0606000_F00600", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "This coincidence makes me happy!\nHey, can I open it?");
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
        var0 = 4;
        }
    else if (System_GlobalWork(0, 1) == 5){
        var0 = 2;
        }
    else if (System_GlobalWork(0, 1) == 6){
        var0 = 3;
        }
    else if (System_GlobalWork(0, 1) == 7){
        var0 = 4;
        }
    else if (System_GlobalWork(0, 1) == 8){
        var0 = 1;
        }
    else if (System_GlobalWork(0, 1) == 9){
        var0 = 2;
        }
    else if (System_GlobalWork(0, 1) == 10){
        var0 = 3;
        }
    else if (System_GlobalWork(0, 1) == 11){
        var0 = 3;
        }
    else if (System_GlobalWork(0, 1) == 12){
        var0 = 2;
        }
    if (var0 == 1){
        Character_ChFace(0, 0, 10);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("R0606000_F00700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Oh, I wanted this! Thank you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hooray! He seemed happy. Good!)");
            }
        else {
            Voice_PlayVoice("R0606000_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Wah... This is what I wanted!\nThank you!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hooray! He seemed happy. Good!)");
            }
        }
    else if (var0 == 2){
        Character_ChFace(0, 0, 10);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("R0606000_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Wah... What a wonderful present!\nI will cherish it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! He seemed quite pleased.)");
            }
        else {
            Voice_PlayVoice("R0606000_F01000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Oh, I wanted this!\nSenpai must have found out!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! Perfect!\nHe seemed like he was happy.)");
            }
        }
    else if (var0 == 3){
        Character_ChFace(0, 0, 3);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("R0606000_F01100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Thank you. I will cherish it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Okay, he seemed fairly pleased.)");
            }
        else {
            Voice_PlayVoice("R0606000_F01200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Heehee... This.\nWell, I'll accept this present.\nThank you!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Okay, he seemed fairly pleased.)");
            }
        }
    else if (var0 == 4){
        Character_ChFace(0, 0, 9);
        Character_ChFace(0, 3, 3);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("R0606000_F01300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "W-Well... Thank you...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(He didn't seem that pleased...)");
            }
        else {
            Voice_PlayVoice("R0606000_F01400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... That, huh...... What is this?\nWell... Thank you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(He didn't seem that pleased...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(6, 61, 3);
    Parameter_AddCh1Param(6, 60, 5);
    Parameter_AddCh1Param(6, 62, #5);
    Parameter_AddCh1Param(6, 86, 1);
    }
