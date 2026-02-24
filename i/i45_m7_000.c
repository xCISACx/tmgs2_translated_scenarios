section "i45_m7_000"{
    Background_Bg_GS2("BG_AR400_?_0", 1, #1, 0);
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(7, "M7_06F", 0);
    Screen_WipeIn(2);
    if (Parameter_GetCh1Param(7, 130) <= 2){
        Voice_PlayVoice("", 7, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝!");
        Voice_PlayVoice("I4507000_G00000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Hello. So you are working here.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes, I am doing my best!");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(7, 2, (#1));
        Voice_PlayVoice("I4507000_G00100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "That is a good response.\nPlease enjoy working. Just like me.");
        Message_Who(0);
        Message_MsgDisp("主人公", "... Pardon?");
        }
    else if (Parameter_GetCh1Param(7, 130) == 3){
        Voice_PlayVoice("I4507000_G00200", 7, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Hello, ｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝. Welcome.");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("I4507000_G00300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "This is an fun store.\nThere are designs that just grab\nyour attention.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Don't they?\nIs there anything that you like,\n｛Wakaouji＊＊｝?");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(7, 3, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("I4507000_G00400", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I wonder... I am fine just looking.\nYou should get back to work.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Uh... One window shopper!)");
        }
    else {
        Voice_PlayVoice("I4507000_G00500", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Hello, charismatic worker.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝!\nDo you mean me?");
        Voice_PlayVoice("I4507000_G00600", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Yes.\nAre shop employees not called that?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Uhh...\nNot every single shop employee is\ncharismatic.");
        Character_ChFace(0, 2, 4);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("I4507000_G00700", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Is that so? I was careless.");
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("I4507000_G00800", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "...\nSo, charismatic shop employee in the\nmaking, will you select clothes that\nwill suit me?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes, please leave it to me!");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(7, 86, 1);
    }
