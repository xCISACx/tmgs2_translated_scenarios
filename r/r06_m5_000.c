section "r06_m5_000"{
    int var0;
    SoundEffect_PlayStream(3, "SS_T_00_160_M00");
    Voice_PlayVoice("R0605000_W00000", #1, "");
    Message_Who(0);
    Message_MsgDisp("Santa", "Ho ho ho.\nI will give a present to you.\nMerry Christmas!");
    Message_Who(0);
    Message_MsgDisp("主人公", "(I wonder what I got..\nI'll open it.)");
    if (Parameter_GetSysParam(0) == 1){
        Message_Who(0);
        Message_MsgDisp("主人公", "(\"Reindeer Mascot Doll\")");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Woah, cute!\nThis is hand made, right?\nIt's meticulously made.)");
        }
    else if (Parameter_GetSysParam(0) == 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "(\"Poinsettia Ornament\")");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Woah...\nWhat an exquisite, nice design.\nI want to display this in my room.)");
        }
    else if (Parameter_GetSysParam(0) == 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "(\"Lamp Shade made of Japanese\nPaper\")");
        Message_Who(0);
        Message_MsgDisp("主人公", "(A painting of a snowflake in such\ndetail...\nUsing this might be a waste.)");
        }
    if (Parameter_GetCh1Param(5, 130) <= 2){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(5, "M5_12F", 0);
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝.");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(5, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("R0605000_E00100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Oh, that's from me.\nWhat a coincidence.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Really?\nAh, ｛Chris＊＊｝ got the\npresent I brought.");
        Character_ChFace(0, 2, 3);
        Character_BlinkStart(5, 3, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("R0605000_E00200", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Really? The same huh, what luck.");
        }
    else if (Parameter_GetCh1Param(5, 130) == 3){
        Character_ChFace(0, 0, 11);
        Character_Chara_GS2(5, "M5_12F", 0);
        Voice_PlayVoice("R0605000_E00300", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "... I'm surprised.\nThat one is from me.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Really?\nAh, ｛Chris＊＊｝ got the\npresent I brought.");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("R0605000_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Ooh～, double surprise.\nGod also knows how to make it\nfashionable.");
        }
    else {
        Character_ChFace(0, 0, 11);
        Character_Chara_GS2(5, "M5_12F", 0);
        Voice_PlayVoice("R0605000_E00500", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Woah.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, ｛Chris＊＊｝.\nWhat's wrong?");
        Voice_PlayVoice("R0605000_E00600", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "That gift is from me.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Really?\nAh, ｛Chris＊＊｝ got the\npresent I brought.");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(5, 3, (#1));
        Character_ChFace(0, 3, 3);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("R0605000_E00700", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "...I'm so happy.\nSomething like this happening...");
        }
    if (System_GlobalWork(0, 1) == 1){
        var0 = 3;
        }
    else if (System_GlobalWork(0, 1) == 2){
        var0 = 3;
        }
    else if (System_GlobalWork(0, 1) == 3){
        var0 = 2;
        }
    else if (System_GlobalWork(0, 1) == 4){
        var0 = 3;
        }
    else if (System_GlobalWork(0, 1) == 5){
        var0 = 2;
        }
    else if (System_GlobalWork(0, 1) == 6){
        var0 = 2;
        }
    else if (System_GlobalWork(0, 1) == 7){
        var0 = 3;
        }
    else if (System_GlobalWork(0, 1) == 8){
        var0 = 2;
        }
    else if (System_GlobalWork(0, 1) == 9){
        var0 = 2;
        }
    else if (System_GlobalWork(0, 1) == 10){
        var0 = 1;
        }
    else if (System_GlobalWork(0, 1) == 11){
        var0 = 2;
        }
    else if (System_GlobalWork(0, 1) == 12){
        var0 = 4;
        }
    if (var0 == 1){
        if (Parameter_GetCh1Param(5, 130) <= 2){
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("R0605000_E00800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Woah, I like this. Thank you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hooray! He seemed happy. Good!)");
            }
        else {
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("R0605000_E00900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "The best gift, thank you.\nI'll treasure it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hooray! He seemed happy. Good!)");
            }
        }
    else if (var0 == 2){
        if (Parameter_GetCh1Param(5, 130) <= 2){
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("R0605000_E01000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "This is really nice, something I\nlike.\nThank you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! He seemed quite pleased.)");
            }
        else {
            Character_ChFace(0, 0, 3);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("R0605000_E01100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "This is nice, something I like.\nI'm so glad～. Thank you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! He seemed quite pleased.)");
            }
        }
    else if (var0 == 3){
        if (Parameter_GetCh1Param(5, 130) <= 2){
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("R0605000_E01200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "This looks good. Thank you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Okay, he seemed fairly pleased.)");
            }
        else {
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(5, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("R0605000_E01300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "This is nice.\nI'll use it from time to time.\nThank you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Okay, he seemed fairly pleased.)");
            }
        }
    else if (var0 == 4){
        if (Parameter_GetCh1Param(5, 130) <= 2){
            Character_ChFace(0, 0, 9);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("R0605000_E01400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "... Thank you...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(He didn't seem that pleased...)");
            }
        else {
            Character_ChFace(0, 0, 9);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("R0605000_E01500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "... Umm... thank you.\nI'll treasure this. Yeah.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(He didn't seem that pleased...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(5, 61, 3);
    Parameter_AddCh1Param(5, 60, 5);
    Parameter_AddCh1Param(5, 62, #5);
    Parameter_AddCh1Param(5, 86, 1);
    }
