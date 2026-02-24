section "s11_m7_000"{
    int var0;
    if (Parameter_GetCh1Param(7, 335) == 0){
        Message_Who(0);
        Message_MsgDisp("主人公", "(I wonder what ｛Wakaouji＊＊｝\ngot?)");
        Message_Who(0);
        Message_MsgDisp("主人公", "What did you get,\n｛Wakaouji＊＊｝?");
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 0);
        Character_Chara_GS2(7, "M7_06F", 0);
        Voice_PlayVoice("S1107000_G00000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "... \"Good luck\".");
        Message_Who(0);
        Message_MsgDisp("主人公", "\"Good luck\"?\nI thought it was something worse\nthan that.");
        Voice_PlayVoice("S1107000_G00100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "It isn't a bad fortune.\nHowever, wouldn't the rate for good\nluck be high?\nI'm a little disappointed.");
        Voice_PlayVoice("S1107000_G00200", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "When a more rare ordinal luck\nappears, then I will be pleased...");
        Message_Who(0);
        Message_MsgDisp("主人公", "H-Hah......");
        Message_Who(0);
        Message_MsgDisp("主人公", "(\"Ordinal\"...\nThis isn't a dice game...)");
        }
    else if (Parameter_GetCh1Param(7, 335) == 1){
        Message_Who(0);
        Message_MsgDisp("主人公", "(I wonder what ｛Wakaouji＊＊｝\ngot?)");
        Message_Who(0);
        Message_MsgDisp("主人公", "What did you get,\n｛Wakaouji＊＊｝?");
        Character_ChFace(0, 0, 11);
        Character_Chara_GS2(7, "M7_06F", 0);
        Voice_PlayVoice("S1107000_G00300", 7, "S1107000_G00301");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "T-This is somewhat......\n｛主人公｝.\nI pulled \"Terrible Luck\"!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Damn... That's disappointing.");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("S1107000_G00400", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Incorrect.\nI think \"Terrible Luck\" presents a\nlow rate to begin with.");
        Voice_PlayVoice("S1107000_G00500", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "New Year's is a unique day where\nmany people pull fortunes.\nFor this reason, fortunes like this\nare rare.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Rare... Fortune dice?");
        Voice_PlayVoice("S1107000_G00600", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Something like that.\nBesides, the present rate for\n\"Excellent Luck\" is low.");
        Voice_PlayVoice("", 7, "S1107000_G00700");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝, what do you\nthink your chances are of pulling\none of those?");
        Message_Who(0);
        Message_MsgDisp("主人公", "... It's wrong to pull two fortunes.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Wakaouji＊＊｝ getting\n\"terrible luck\" seems very\nunlikely...)");
        }
    else {
        var0 = System_Randam(0, 100);
        if (var0 <= 50){
            Message_Who(0);
            Message_MsgDisp("主人公", "(I wonder what ｛Wakaouji＊＊｝\ngot?)");
            Message_Who(0);
            Message_MsgDisp("主人公", "What did you get,\n｛Wakaouji＊＊｝?");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(7, 3, (#1));
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(7, "M7_06F", 0);
            Voice_PlayVoice("S1107000_G00000", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "... \"Good luck\".");
            Message_Who(0);
            Message_MsgDisp("主人公", "\"Good luck\"?\nI thought it was something worse\nthan that.");
            Character_BlinkStart(7, 2, (#1));
            Voice_PlayVoice("S1107000_G00100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "It isn't a bad fortune.\nHowever, wouldn't the rate for good\nluck be high?\nI'm a little disappointed.");
            Voice_PlayVoice("S1107000_G00200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "When a more rare ordinal luck\nappears, then I will be pleased...");
            Message_Who(0);
            Message_MsgDisp("主人公", "H-Hah......");
            Message_Who(0);
            Message_MsgDisp("主人公", "(\"Ordinal\"...\nThis isn't a dice gane...)");
            }
        else if (var0 >= 51){
            Message_Who(0);
            Message_MsgDisp("主人公", "(I wonder what ｛Wakaouji＊＊｝\ngot?)");
            Message_Who(0);
            Message_MsgDisp("主人公", "What did you get,\n｛Wakaouji＊＊｝?");
            Character_ChFace(0, 0, 11);
            Character_Chara_GS2(7, "M7_06F", 0);
            Voice_PlayVoice("S1107000_G00300", 7, "S1107000_G00301");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "T-This is somewhat......\n｛主人公｝.\nI pulled \"Terrible Luck\"!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Woah... That's disappointing.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("S1107000_G00400", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Incorrect.\nI think \"Terrible Luck\" presents a\nlow rate to begin with.");
            Voice_PlayVoice("S1107000_G00500", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "New Year's is a unique day where\nmany people pull fortunes.\nFor this reason, fortunes like this\nare rare.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Rare... Fortunes dice?");
            Voice_PlayVoice("S1107000_G00600", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Something like that.\nBesides, the present rate for\n\"Excellent Luck\" is low.");
            Voice_PlayVoice("", 7, "S1107000_G00700");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝, what do you\nthink your chances are of pulling\none of those?");
            Message_Who(0);
            Message_MsgDisp("主人公", "... It's wrong to pull two fortunes.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Wakaouji＊＊｝ getting\n\"terrible luck\" seems very\nunlikely...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(7, 335, 1);
    }
