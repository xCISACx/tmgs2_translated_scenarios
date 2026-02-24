section "h8b_m3_000"{
    Background_Bg_GS2("BG_SC700_SU_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "Alright, camp starts today!\nI'll do my best!");
    if (Parameter_GetCh1Param(3, 130) <= 2){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(3, "M3_01F", 0);
        Voice_PlayVoice("", 3, "H7B03000_C00000");
        Message_Who(3);
        Message_MsgDisp("Hikami", "｛主人公｝, please treat\nme well.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝.\nPlease treat me well this week.");
        Character_ChFace(0, 0, 3);
        Character_BlinkStart(3, 2, (#1));
        Voice_PlayVoice("H7B03000_C00100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "You've heard it too, right?\nThey say that this executive camp is\na hellish camp for leaders.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Y-Yeah... It seems so.");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(3, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("H7B03000_C00200", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Through debating during the camp, we\nshould both sharpen our inner\nleader.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah.\nLet's do our best,\n｛Hikami＊＊｝.");
        }
    else if (Parameter_GetCh1Param(3, 130) == 3){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(3, "M3_01F", 0);
        Voice_PlayVoice("", 3, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝.\nPlease treat me well this week.");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(3, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("H7B03000_C00300", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Ah, please treat me well.\nThis hellish leader camp will start\nnow.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah...\nWhen I hear people call it that, I\nget a little nervous.");
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("H7B03000_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Yes, definitely.\nLet us both use this chance to learn\ndebating techniques.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah! Let's do our best.");
        }
    else {
        Character_BlinkStart(3, 2, (#1));
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(3, "M3_01F", 0);
        Voice_PlayVoice("", 3, "H7B03000_C00500");
        Message_Who(3);
        Message_MsgDisp("Hikami", "｛主人公｝.\nThe season for camp has finally\ncome.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝.\nYou're right.\nPlease treat me well this week.");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(3, 3, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("H7B03000_C00600", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I wonder if we'll be indulging in a\nweek long debate.\nBecause you're here, it does not\nseem like things will get out of\nhand.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh? What did you say?");
        Character_ChFace(0, 2, 3);
        Character_BlinkStart(3, 2, (#1));
        Character_ChFace(0, 3, 3);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("H7B03000_C00700", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Ah, no, umm......\nNothing, just that it seems like the\nboth of us will do our best.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah. Let's do our best.");
        }
    Character_Chara_GS2(3, "NON");
    System_Call_GS2("H8B", "G2", 0);
    Message_CloseMsg();
    Screen_WipeOut(21);
    }
