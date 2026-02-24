section "p64_m6_000"{
    if (Parameter_GetPl1Param(322) == 0){
        if (Parameter_bunka_jyu(0) == 1){
            System_Wait(60);
            Background_Bg_GS2("BG_SC930_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it! I did good!)");
            Voice_PlayVoice("", 6, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝!");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Amachi＊＊｝!\nHey, how was it?");
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(6, "M6_01F", 0);
            Voice_PlayVoice("P6406000_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Yeah, it was good.\nI'm a little surprised.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Really!? I'm glad!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Amachi＊＊｝!)");
            }
        else {
            System_Wait(60);
            Background_Bg_GS2("BG_SC930_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, big mistake...)");
            Voice_PlayVoice("", 6, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Amachi＊＊｝... I-I...");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(6, "M6_01F", 0);
            Voice_PlayVoice("P6406000_F00200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Well, you would do something like\nthis.\nYou were pretty nervous.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ugh...");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P6406000_F00300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Just forget about it.\nIt's already over.");
            }
        }
    else if (Parameter_GetPl1Param(322) == 1){
        if (Parameter_bunka_jyu(0) == 1){
            System_Wait(60);
            Background_Bg_GS2("BG_SC930_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it! I did good!)");
            Voice_PlayVoice("", 6, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝!");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Amachi＊＊｝!\nHey, how was it?");
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(6, "M6_01F", 0);
            Voice_PlayVoice("P6406000_F00400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "That was the best!\nIt gave me goosebumps for a moment!");
            Voice_PlayVoice("P6406000_F00500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I think that song made me feel...\nAmazingly moved!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Amachi＊＊｝!)");
            }
        else {
            System_Wait(60);
            Background_Bg_GS2("BG_SC930_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, big mistake...)");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Amachi＊＊｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Amachi＊＊｝... I-I...");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(6, "M6_01F", 0);
            Voice_PlayVoice("P6406000_F00600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Well, that's that.\nTo be honest, you sucked.");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(6, 3, (#1));
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("P6406000_F00700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I know the piece of music myself, so\nit's definitely true....\nYou need to practice properly!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nI should have taken practice more\nseriously...)");
            }
        }
    else {
        if (Parameter_bunka_jyu(0) == 1){
            System_Wait(60);
            Background_Bg_GS2("BG_SC930_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it! I did good!)");
            Voice_PlayVoice("", 6, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Amachi＊＊｝! ...\nH-How was it?");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(6, 3, (#1));
            Character_ChFace(0, 3, 1);
            Character_Chara_GS2(6, "M6_01F", 0);
            Voice_PlayVoice("P6406000_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I-I'm not crying or anything like\nthat!\nBut...\nit made me go numb for a little\nwhile!");
            Voice_PlayVoice("P6406000_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... It was remarkable.\nIt's mortifying not to say anything\nmore than that!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Amachi＊＊｝!)");
            }
        else {
            System_Wait(60);
            Background_Bg_GS2("BG_SC930_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, big mistake...)");
            Voice_PlayVoice("", 6, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Amachi＊＊｝...");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(6, "M6_01F", 0);
            Voice_PlayVoice("P6406000_F01000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... Hey, did you enjoy that?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh?");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("P6406000_F01100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It's okay to still make one mistake.\nAs long as Senpai enjoys it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Amachi＊＊｝...");
            Voice_PlayVoice("P6406000_F01200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "...\nAlso, you were feeling very nervous!\nThat equals to a roller coaster!!");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(6, 3, (#1));
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("P6406000_F01300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "But it's bad for your heart if you\ndon't take things a little more\nseriously...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nI should have taken practice more\nseriously...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(6, 86, 1);
    }
