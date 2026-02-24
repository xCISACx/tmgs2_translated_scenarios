section "p64_m7_000"{
    if (Parameter_GetPl1Param(322) == 0){
        if (Parameter_bunka_jyu(0) == 1){
            System_Wait(60);
            Background_Bg_GS2("BG_SC930_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Good! That worked out well!)");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(7, "M7_17F", 0);
            Voice_PlayVoice("", 7, "P6407000_G00000");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Good job, ｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Wakaouji＊＊｝!\nWas the musical performance good?");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P6407000_G00100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Yes, it was very good.\nYour performance shined.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Wakaouji＊＊｝!)");
            }
        else {
            System_Wait(60);
            Background_Bg_GS2("BG_SC930_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh, big mistake...)");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(7, "M7_17F", 0);
            Voice_PlayVoice("P6407000_G00200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "A dramatic performance.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Wakaouji＊＊｝...");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P6407000_G00300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "The evaluation meeting is after\nthis.\nIt seems like it will turn ugly like\na soap opera.\nSensei's heart's racing.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm terrified...)");
            }
        }
    else if (Parameter_GetPl1Param(322) == 1){
        if (Parameter_bunka_jyu(0) == 1){
            System_Wait(60);
            Background_Bg_GS2("BG_SC930_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Good!\nIt somehow managed to be a success!)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(7, "M7_17F", 0);
            Voice_PlayVoice("", 7, "P6407000_G00400");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝, good work.\nThat was a very pleasant\nperformance.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Wakaouji＊＊｝! Thank you!");
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("P6407000_G00500", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Especially your part in the discord.\nIt gave Sensei some spirit.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Wakaouji＊＊｝!)");
            }
        else {
            System_Wait(60);
            Background_Bg_GS2("BG_SC930_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh, big mistake...)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(7, "M7_17F", 0);
            Voice_PlayVoice("", 7, "P6407000_G00600");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "That was quite a pleasant\nperformance, ｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "What!?\nIs that true, ｛Wakaouji＊＊｝?");
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P6407000_G00700", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Your part of the discord in\nparticular was interesting.\nThat part of the score seemed\ncomplicated.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nI should have practiced properly.)");
            }
        }
    else {
        if (Parameter_bunka_jyu(0) == 1){
            System_Wait(60);
            Background_Bg_GS2("BG_SC930_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Good! I was able to perform well!)");
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(7, "M7_17F", 0);
            Voice_PlayVoice("", 7, "P6407000_G00800");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Bravo, ｛主人公｝!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Wakaouji＊＊｝!\nThank you!");
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(7, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P6407000_G00900", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "It's not flattery.\nYour performance was really good.");
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P6407000_G01000", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Please allow yourself praise.\nThe club activities were well done\nand you worked hard.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Wakaouji＊＊｝!)");
            }
        else {
            System_Wait(60);
            Background_Bg_GS2("BG_SC930_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh, big mistake...)");
            Character_Chara_GS2(7, "M7_17F", 0);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("", 7, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "... ｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ugh, ｛Wakaouji＊＊｝.");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P6407000_G01200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "The arrangement was avant-garde.\nSensei doesn't really understand why\nhe couldn't keep up with it.");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(7, 3, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P6407000_G01300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I need to learn a little more about\nit.\nI'm sorry.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... It's not your fault, Sensei.\nI'm sorry!!)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(7, 86, 1);
    }
