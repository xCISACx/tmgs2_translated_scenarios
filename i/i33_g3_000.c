section "i33_g3_000"{
    Background_Bg_GS2("BG_AR300_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "I'm the new person starting today,\n｛主人公姓名｝.\nI look forward to working with you.");
    Voice_PlayVoice("I4315000_W00000", #1, "");
    Message_Who(0);
    Message_MsgDisp("Chief", "You'll be in charge every Tuesday\nand Thursday.\nI look forward to working with you.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Yes, I understand.");
    Message_Who(0);
    Message_MsgDisp("主人公", "(Alright, I'll do my best!)");
    if (Parameter_GetCh1Param(12, 514) == 0){
        System_Call_GS2("A02", "G3", 300);
        }
    else {
        if (Parameter_GetCh1Param(12, 513) != 1){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(12, "G3_13F", 0);
            Voice_PlayVoice("I3312000_L00100", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Oh... you came?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Nishimoto＊＊｝!\nI look forward to working with you!");
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("I3312000_L00200", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "You chose to work here because\nyou're also after it, right?");
            Message_Who(0);
            Message_MsgDisp("主人公", "\"It\"?");
            Character_BlinkStart(12, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("I3312000_L00300", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Playing dumb, again～!\nNow that you're here, I'll be\ngetting less!");
            Character_BlinkStart(12, 0, (#1));
            Character_ChFace(0, 2, 1);
            Voice_PlayVoice("I3312000_L00400", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "It's a matter of life or death to\nme!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Uhh...?");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("I3312000_L00500", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Anyway, I welcome you!");
            Character_BlinkStart(12, 3, (#1));
            Voice_PlayVoice("I3312000_L00600", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Just thinking about being able to\nchat with you lots makes me so\nhappy!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, I look forward to it!");
            Character_BlinkStart(12, 0, (#1));
            Voice_PlayVoice("I3312000_L00700", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "If there's something you don't know,\nask me!\nI don't think you'll have any\nproblems, though!");
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(12, "G3_13F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Nishimoto＊＊｝.\nI look forward to working with you!");
            Voice_PlayVoice("I3312000_L00800", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Yeah. Me too.");
            Message_Who(0);
            Message_MsgDisp("主人公", "If there is something that I don't\nknow, please teach me.");
            Character_BlinkStart(12, 3, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("I3312000_L00900", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "It's a real easy job so anyone would\nbe able to get the hang of it right\naway.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh, uhh... I see.");
            Character_BlinkStart(12, 0, (#1));
            Voice_PlayVoice("I3312000_L01000", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "You should read if there's nothing\nto do.");
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("I3312000_L01100", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Because I'll be reading, too.\nLet's both do as we please.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Y-Yeah...");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(12, 86, 1);
    }
