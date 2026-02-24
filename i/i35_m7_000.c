section "i35_m7_000"{
    Background_Bg_GS2("BG_AR300_?_0", 1, #1, 0);
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(7, "M7_06F", 0);
    Screen_WipeIn(2);
    if (Parameter_GetCh1Param(7, 130) <= 2){
        Voice_PlayVoice("", 7, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝!\nAre you looking for cake?");
        Voice_PlayVoice("I3507000_G00000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "No, I am not. I was just passing by.\nIt is also called \"window shopping\".");
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("I3507000_G00100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Work hard. I will leave now.");
        Character_Chara_GS2(7, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(... What was that?)");
        }
    else if (Parameter_GetCh1Param(7, 130) == 3){
        Voice_PlayVoice("", 7, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝. Welcome.");
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("I3507000_G00200", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I heard from the students that this\nplace has the \"Dusk Mont Blanc\"?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes! That is our new cake.\nYou're quite in line with trends,\n｛Wakaouji＊＊｝.");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("I3507000_G00300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Aren't I? Please give me one.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes! Thank you very much for buying!");
        }
    else {
        Voice_PlayVoice("", 7, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝. Welcome!");
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("I3507000_G00400", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I want to ask a favor from you.\nWill you hand over some dry ice?\nI need to use it.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Dry... ice? Umm, what about cake?");
        Character_ChFace(0, 0, 9);
        Voice_PlayVoice("I3507000_G00500", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "... Do I have to buy cake?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes, you have to.");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("I3507000_G00600", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "You're quite a serious worker....\nOkay, please give me your favorite\ncake.\nI'll give it to you as a present.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh, is that okay?");
        Voice_PlayVoice("I3507000_G00700", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Yes.... So please give me dry ice.");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(7, 86, 1);
    }
