section "p54_m7_000"{
    if (Parameter_GetPl1Param(322) == 0){
        if (Parameter_bunka_jyu(0) == 1){
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(7, "M7_17F", 0);
            Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("", 7, "P5407000_G00000");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝, you were able\nto do well.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Wow, thank you!");
            Voice_PlayVoice("P5407000_G00100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Hanatsubaki-san also seems happy.\nI wonder if she is glad that she had\nyou draw something for the\npresentation.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Wakaouji＊＊｝!)");
            }
        else {
            Character_ChFace(0, 0, 11);
            Character_Chara_GS2(7, "M7_17F", 0);
            Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("P5407000_G00200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "It's a different dimension.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes?");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("P5407000_G00300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Hanatsubaki-san reconstructed it to\nmake it become the feeling of phase\nspace.\nSurely?");
            Message_Who(0);
            Message_MsgDisp("主人公", "......... You don't understand.\nBuuuzz, wrong...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nI should have taken the club\nactivities more seriously...)");
            }
        }
    else if (Parameter_GetPl1Param(322) == 1){
        if (Parameter_bunka_jyu(0) == 1){
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(7, "M7_17F", 0);
            Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("P5407000_G00400", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "The work is the same as the\nreputation.\nYou also tried your best.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ooh, thank you!");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(7, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P5407000_G00500", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "A large amount of strength gathered\nand a lovely thing was born into the\nworld....\nIt's wonderful art.");
            Voice_PlayVoice("P5407000_G00600", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Sensei also wanted to join in with\nall of you to make it.\nHe would have been happy.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Wakaouji＊＊｝!)");
            }
        else {
            Character_ChFace(0, 0, 11);
            Character_Chara_GS2(7, "M7_17F", 0);
            Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("P5407000_G00700", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "All worldly things are transitory.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh?");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("P5407000_G00800", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Things with shapes will one day\ndisappear.\nThe theme of this work is\nphilosophy.\nRight?");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Buuuzzz, wrong.\nThat's not the sort of thing I was\naiming for.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nI should have taken the club\nactivities more seriously...)");
            }
        }
    else {
        if (Parameter_bunka_jyu(0) == 1){
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(7, "M7_17F", 0);
            Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("", 7, "P5407000_G00900");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝, an excellent\nthing was made.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ooh, thank you!");
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("P5407000_G01000", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "An extraordinary piece of work that\nallows me to think.\nThat's what I thought of this\nmasterpiece.");
            Voice_PlayVoice("P5407000_G01100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Sensei will not be forgetting this\nmural for a long time, after this.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Wakaouji＊＊｝!)");
            }
        else {
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(7, "M7_17F", 0);
            Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("P5407000_G01200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Uhh...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Is something wrong,\n｛Wakaouji＊＊｝?");
            Voice_PlayVoice("P5407000_G01300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I did not come across a good virtue\nin the mural when this exhibition\nwas displayed.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh? What kind did you come across?");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("P5407000_G01400", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "In this case, all I see is a\npainting.\nPut it in the smaller room and bring\nit close to one's eyes and they can\nsee it.");
            Voice_PlayVoice("P5407000_G01500", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "But in that case, you can put these\nparts into someone's blind spot and\nthey disappear, you can't see them.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh, I painted those parts...\nI should have tried harder...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(7, 86, 1);
    }
