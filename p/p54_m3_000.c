section "p54_m3_000"{
    if (Parameter_GetPl1Param(322) == 0){
        if (Parameter_bunka_jyu(0) == 1){
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(3, "M3_01F", 0);
            Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("P5403000_C00000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... That was promising.\nI felt your presence in the\npainting.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh, really?");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(3, 2, (#1));
            Voice_PlayVoice("P5403000_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes, untrained eyes could never\nunderstand the merit of it.\nIt was worth having Hanatsubaki-san\nact as the model.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Hikami＊＊｝!)");
            }
        else {
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(3, "M3_01F", 0);
            Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("P5403000_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nYou really painted Hanatsubaki-san?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Y-Yes...");
            Character_BlinkStart(3, 3, (#1));
            Voice_PlayVoice("P5403000_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I believe looking at Hanatsubaki-san\nlike that, as the art of a painting\nis frightening, no matter how I look\nat it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Aah～, I should have drawn more\nperfectly...)");
            }
        }
    else if (Parameter_GetPl1Param(322) == 1){
        if (Parameter_bunka_jyu(0) == 1){
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 5);
            Character_Chara_GS2(3, "M3_01F", 0);
            Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("P5403000_C00400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... I'm surprised.\nI did not think the high school's\nart club was on that kind of level.");
            Message_Who(0);
            Message_MsgDisp("主人公", "O-Oh yeah...?");
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P5403000_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Indeed, It appears as if it is\nalive...\nThough I am not the prince, if a\nmermaid like that appeared, I would\nfall in love.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(3, 2, (#1));
            Voice_PlayVoice("P5403000_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... You made a nice display.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Hikami＊＊｝!)");
            }
        else {
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(3, "M3_01F", 0);
            Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("P5403000_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", ".........\nDid you finish working on this?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ugh...");
            Character_BlinkStart(3, 3, (#1));
            Voice_PlayVoice("P5403000_C00800", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I got the impression it was somehow\npicked apart by a fox.\nYes, what a waste of plaster...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Aaah～, I should have tried harder\nto create it...)");
            }
        }
    else {
        if (Parameter_bunka_jyu(0) == 1){
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(3, "M3_01F", 0);
            Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("P5403000_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nOverall, it was a remarkable piece\nof work.\nBy the way, what were you in charge\nof doing?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Uhh... This.");
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("P5403000_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... What a surprise!\nDid you really paint that here?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes... What do you think?");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("P5403000_C01100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Though you did a small part, the\nentirety of the mural is full of\npower....\nYou have such talent.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Hikami＊＊｝!)");
            }
        else {
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(3, "M3_01F", 0);
            Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("P5403000_C01200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "The part you worked on...\nI would have never imagined.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, that...");
            Character_BlinkStart(3, 3, (#1));
            Voice_PlayVoice("P5403000_C01300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...... Of all people, you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ugh...");
            Character_BlinkStart(3, 0, (#1));
            Voice_PlayVoice("P5403000_C01400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Though this is splendid work, I did\nnot think your section would look so\nterribly miserable.");
            Character_BlinkStart(3, 2, (#1));
            Voice_PlayVoice("P5403000_C01500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "You cut corners, rather than stand\nout.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Aah～, I should have gone to more\nclub activities...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(3, 86, 1);
    }
