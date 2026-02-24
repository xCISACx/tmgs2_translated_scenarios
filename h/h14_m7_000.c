section "h14_m7_000"{
    if (Parameter_GetCh1Param(7, 130) <= 3){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(7, "M7_01F", 0);
        Voice_PlayVoice("", 7, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝.");
        Character_ChFace(0, 0, 11);
        Character_BlinkStart(7, 2, (#1));
        Voice_PlayVoice("H1407000_G00000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Oh, it's a practice match.\nWhat number batter are you?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Umm, I'm the manager, so...");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("H1407000_G00100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "That is unfortunate.\nBut I am free, so maybe I should\nwatch.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Please cheer for us as well.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Alright, I should also do my best\ncheering them on!)");
        }
    else {
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(7, "M7_01F", 0);
        Voice_PlayVoice("", 7, "H1407000_G00200");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝, did I make it\nin time?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝.\nYou are fine, the game will be\nstarting now.");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 5);
        Voice_PlayVoice("H1407000_G00300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Thank gosh for that....\nI came here to cheer.\nEven just having one more voice is\nbetter.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes! Thank you very much!");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("H1407000_G00400", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Do your best, manager!\nKnock them out, manager!");
        Message_Who(0);
        Message_MsgDisp("主人公", "W-Wait, ｛Wakaouji＊＊｝!\nI'm not going to be in the actual\ngame.");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(7, 3, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("H1407000_G00500", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Isn't it fine to occasionally cheer\nfor the manager too?");
        Message_Who(0);
        Message_MsgDisp("主人公", "...\nPlease direct your cheers to the\nplayers.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Even ｛Wakaouji＊＊｝ came\nhere to watch.\nI have to do my best cheering them\non!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
