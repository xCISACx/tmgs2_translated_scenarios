section "h3a_m3_000"{
    if (Parameter_GetBkParam(3, 52) >= 320){
        if (Parameter_GetCh1Param(3, 130) >= 4){
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(3, "M3_01F", 0);
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("", 3, "H3A03000_C00200");
            Message_Who(3);
            Message_MsgDisp("Hikami", "｛主人公｝.\nCongratulations on winning the inter\nhigh school championships.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Haha!\nThanks for your support too,\n｛Hikami＊＊｝!");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("H3A03000_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Haha...\nYou look like you won easily, so I\nkind of got heated up in supporting\nyou.");
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("H3A03000_C00400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "But my support isn't the subject\nhere.\nYou are really amazing.\nIt's a result of your effort.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm really glad I stayed in the\nTrack and Field Club.\nThis is the best day!)");
            }
        }
    else {
        if (Parameter_GetCh1Param(3, 130) >= 4){
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(3, "M3_01F", 0);
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("", 3, "H3A03000_C00700");
            Message_Who(3);
            Message_MsgDisp("Hikami", "｛主人公｝....\nYou were so close.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah... I lost.");
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H3A03000_C00800", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Please cheer up.\nJust competing in the inter high\nschool championships in itself is an\namazing thing.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I know, but...");
            Character_ChFace(0, 0, 6);
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 4, 0);
            Voice_PlayVoice("H3A03000_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I didn't think that I would ever be\ngoing to an inter high school\nchampionship.");
            Character_ChFace(0, 0, 6);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H3A03000_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "And you brought me here....\nThank you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Right...\nYeah, I'm glad I stayed in the Track\nand Field Club.)");
            }
        }
    Parameter_AddCh1Param(3, 86, 1);
    }
