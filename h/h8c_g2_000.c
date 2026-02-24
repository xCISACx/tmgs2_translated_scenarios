section "h8c_g2_000"{
    if (System_GlobalWork(1, 1) == 1){
        if (Parameter_GetCh1Param(11, 513) != 1){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(11, "G2_08F", 0);
            Music_PlayBGM(0, "MN_C_11_000_D02", 127, 40);
            Voice_PlayVoice("H7C11000_K00500", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "... Excuse me. About our food.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh?");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("H7C11000_K00600", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "Are you bad at cooking?\nIf you had told me, I would have\nhelped out.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nI should have made proper food.)");
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(11, "G2_08F", 0);
            Music_PlayBGM(0, "MN_C_11_000_D02", 127, 40);
            Voice_PlayVoice("H7C11000_K00700", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "Well, there is the saying \"time is\nmoney\", but...");
            Voice_PlayVoice("H7C11000_K00800", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "Isn't it also important to take the\ntime to do things, occasionally?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nI should have made proper food.)");
            }
        Parameter_AddCh1Param(11, 60, #1);
        }
    else if (System_GlobalWork(1, 1) == 2){
        if (Parameter_GetPl1Param(20) >= 60){
            if (Parameter_GetCh1Param(11, 513) != 1){
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Character_Chara_GS2(11, "G2_08F", 0);
                Music_PlayBGM(0, "MN_C_11_000_D02", 127, 40);
                Voice_PlayVoice("H7C11000_K01300", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "It was nice.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Really?");
                Voice_PlayVoice("H7C11000_K01400", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "Yes, very.\nWill you teach me how to make it\nnext time?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yay, I was complimented!)");
                }
            else {
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(11, "G2_08F", 0);
                Music_PlayBGM(0, "MN_C_11_000_D02", 127, 40);
                Voice_PlayVoice("H7C11000_K01500", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "... Thanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Umm, how was it?");
                Voice_PlayVoice("H7C11000_K01600", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "It wasn't bad...\nBut it was too flavorsome that it\ndidn't have a homemade feeling.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(But she ate it all...\nI'm relieved.)");
                }
            Parameter_AddCh1Param(11, 60, 3);
            }
        else {
            if (Parameter_GetCh1Param(11, 513) != 1){
                Character_BlinkStart(11, 3, (#1));
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 1);
                Character_Chara_GS2(11, "G2_08F", 0);
                Music_PlayBGM(0, "MN_C_11_000_D02", 127, 40);
                Voice_PlayVoice("H7C11000_K01700", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "Thanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Umm... how was it?");
                Voice_PlayVoice("H7C11000_K01800", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "............");
                Message_Who(0);
                Message_MsgDisp("主人公", "............");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("H7C11000_K01900", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "... Um, do you perhaps have a cold?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So it wasn't nice...)");
                }
            else {
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(11, "G2_08F", 0);
                Music_PlayBGM(0, "MN_C_11_000_D02", 127, 40);
                Voice_PlayVoice("H7C11000_K02000", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "... It was unexpected.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh...?");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("H7C11000_K02100", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "I thought you were the type of\nperson who could do anything...\nI was surprised that it was so\nlacking.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh...\nI should have learned how to\ncook...)");
                }
            Parameter_AddCh1Param(11, 60, #3);
            }
        }
    else if (System_GlobalWork(1, 1) == 3){
        if (Parameter_GetPl1Param(20) >= 80){
            if (Parameter_GetCh1Param(11, 513) != 1){
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Character_Chara_GS2(11, "G2_08F", 0);
                Music_PlayBGM(0, "MN_C_11_000_D02", 127, 40);
                Voice_PlayVoice("H7C11000_K02800", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "Thanks for the food.\nIt was a wonderful meal.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nI'm glad I tried my best making\nfood.)");
                Voice_PlayVoice("H7C11000_K02900", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "Yes.\nI feel that my energy has\nreplenished.\nNow I can do my best tomorrow, too.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nI'm glad I tried my best making\nfood.)");
                }
            else {
                Character_ChFace(0, 0, 9);
                Character_Chara_GS2(11, "G2_08F", 0);
                Music_PlayBGM(0, "MN_C_11_000_D02", 127, 40);
                Message_Who(0);
                Message_MsgDisp("主人公", "What's wrong? It wasn't nice?");
                Voice_PlayVoice("H7C11000_K03000", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "No, it was nice.... Extremely.");
                Voice_PlayVoice("H7C11000_K03100", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "I'm still lacking.\nI have to try my best...");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(11, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(What's up with\n｛Onoda＊＊｝?)");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ah, but she ate it all.\nI'm glad I tried my best making\nfood.)");
                }
            Parameter_AddCh1Param(11, 60, 5);
            }
        else {
            if (Parameter_GetCh1Param(11, 513) != 1){
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(11, "G2_08F", 0);
                Music_PlayBGM(0, "MN_C_11_000_D02", 127, 40);
                Voice_PlayVoice("H7C11000_K03200", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "... Umm, excuse me.\nDid you catch a cold?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh? W-Why?");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("H7C11000_K03300", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "...\nBecause when you catch a cold, your\nsense of smell and taste becomes\nstrange...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So it wasn't nice. Sorry...)");
                }
            else {
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(11, "G2_08F", 0);
                Music_PlayBGM(0, "MN_C_11_000_D02", 127, 40);
                Voice_PlayVoice("H7C11000_K03400", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "I am relieved.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Voice_PlayVoice("H7C11000_K03500", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "You have something that you're not\ngood at....\nI thought you were a genius though.");
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("H7C11000_K03600", #1, "");
                Message_Who(11);
                Message_MsgDisp("Onoda", "But when I think about the fact that\nyou also fed this to Hikami-kun, my\nheart hurts a little...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh...\nI should have made what I was good\nat making.)");
                }
            Parameter_AddCh1Param(11, 60, #5);
            }
        }
    Music_StopBGM(0, 40);
    }
