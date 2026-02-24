section "o03_g1_010"{
    if (Parameter_GetCh1Param(10, 130) <= 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "I need a partner.");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(10, "G1_08F", 0);
        Voice_PlayVoice("", 10, "O0310000_J00000");
        Message_Who(10);
        Message_MsgDisp("Toudou", "Have you not partnered up yet,\n｛主人公｝?");
        Message_Who(0);
        Message_MsgDisp("主人公", "If it's alright, do you want to\nparticipate together?");
        Voice_PlayVoice("O0310000_J00100", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "I feel tired...\nWell, let's take it easy.");
        Message_Who(0);
        Message_MsgDisp("主人公", "It's okay. Thank you.");
        }
    else if (Parameter_GetCh1Param(10, 130) >= 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "I need a partner.");
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(10, "G1_08F", 0);
        Voice_PlayVoice("", 10, "O0310000_J00200");
        Message_Who(10);
        Message_MsgDisp("Toudou", "｛主人公｝, I found you.\nYou want to partner together with\nme?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes!");
        Voice_PlayVoice("O0310000_J00300", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "Well, thank you for asking.\nPlease treat me well.");
        }
    Message_CloseMsg();
    Character_Chara_GS2(10, "NON");
    }
