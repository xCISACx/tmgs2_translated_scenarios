section "p84_s1_000"{
    if (Parameter_GetPl1Param(322) == 0){
        Background_Bg_GS2("BG_SCA80_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_bunka_jyu(0) == 1){
            SoundEffect_PlayStream(3, "SS_DSE_052_000");
            Message_Who(0);
            Message_MsgDisp("主人公", "I've finished copying the 15th\nbatch～!");
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(14, 2, (#1));
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(14, "S1_04F", 0);
            Voice_PlayVoice("P7414000_N00000", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "You did well, Sis.\nYou're a professional at copying!");
            Message_Who(0);
            Message_MsgDisp("主人公", "... I don't feel like being praised.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(However, I guess it's fine, since I\ndid well.)");
            SoundEffect_StopStream(3, 40);
            }
        else {
            SoundEffect_PlayStream(3, "SS_DSE_052_000");
            Message_Who(0);
            Message_MsgDisp("主人公", "H-Huh?\nI'm sure if this button is pushed...");
            SoundEffect_StopStream(3, 40);
            SoundEffect_PlayStream(2, "SS_T_00_069_M00");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh? It's broken!?");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(14, 2, (#1));
            Character_Chara_GS2(14, "S1_04F", 0);
            Voice_PlayVoice("P7414000_N00100", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "... Is Sis, okay?\nIt's probably just out of paper.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh, oh? Y-You're right...");
            Character_BlinkStart(14, 3, (#1));
            Voice_PlayVoice("P7414000_N00200", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "*Sigh～*... Sis...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh, what a huge mistake...)");
            SoundEffect_StopStream(2, 40);
            }
        }
    else if (Parameter_GetPl1Param(322) == 1){
        Background_Bg_GS2("BG_SCA80_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_bunka_jyu(0) == 1){
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Message_Who(0);
            Message_MsgDisp("主人公", "Found a projector.\nThe previous class forgot to return\nit.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I've already told them to bring it\ndirectly to the next class.");
            Voice_PlayVoice("P7414000_W00300", #1, "");
            Message_Who(0);
            Message_MsgDisp("Male Student", "Thank you, that's a big help.");
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(14, 2, (#1));
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(14, "S1_04F", 0);
            Voice_PlayVoice("P7414000_N00400", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Sis, you're cool!\nIt feels like you can do anything!");
            Message_Who(0);
            Message_MsgDisp("主人公", "R-Really?");
            Character_Chara_GS2(14, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh* Good thing that went well.)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Message_Who(0);
            Message_MsgDisp("主人公", "W-Well... Umm... The projector...");
            Voice_PlayVoice("P7414000_W00500", #1, "");
            Message_Who(0);
            Message_MsgDisp("Male Student", "You never found it?\nHmmm～, that's a problem.\nPlease manage to get it back\nproperly.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I'm sorry...");
            Character_ChFace(0, 0, 0);
            Character_BlinkStart(14, 3, (#1));
            Character_Chara_GS2(14, "S1_04F", 0);
            Voice_PlayVoice("P7414000_N00600", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Well anyway, Sis, you will always\nhave a day like this once in a\nlifetime.");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Yuu-kun, how old are you?");
            Character_Chara_GS2(14, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh* A huge mistake...)");
            }
        }
    else {
        if (Parameter_bunka_jyu(0) == 1){
            Message_CloseMsg();
            Screen_WipeOut(2);
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Background_Bg_GS2("BG_SC230_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "...\nAnyway, please follow the rules\nstrictly.\nDo this again and it'll be a\npenalty!");
            Voice_PlayVoice("P7414000_W00700", #1, "");
            Message_Who(0);
            Message_MsgDisp("Male Student", "Okay, I'm sorry...");
            Character_ChFace(0, 0, 11);
            Character_Chara_GS2(14, "S1_04F", 0);
            Voice_PlayVoice("P7414000_N00800", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Amazing...\nYou look pretty cool, Sis.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Because it's a job.");
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(14, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P7414000_N00900", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Woah, the way you said that sounded\ncool!\nSort of like a police officer.");
            Message_Who(0);
            Message_MsgDisp("主人公", "...Umm, you praised me, right?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(But well, since the problem has\nbeen resolved, I guess it's fine.)");
            }
        else {
            Message_CloseMsg();
            Screen_WipeOut(2);
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Background_Bg_GS2("BG_SC230_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("P7414000_W01000", #1, "");
            Message_Who(0);
            Message_MsgDisp("Male Student", "It's alright to do such a thing\nsince it's normal.\nBesides, other class are doing it,\ntoo.");
            Message_Who(0);
            Message_MsgDisp("主人公", "W-Well you've got a point but, it'll\nbe a nuisance for the next class...");
            Voice_PlayVoice("P7414000_W01100", #1, "");
            Message_Who(0);
            Message_MsgDisp("Male Student", "Anyway, I'm busy right now. Bye.");
            Message_Who(0);
            Message_MsgDisp("主人公", "W-Wait! ... He's gone.");
            Character_ChFace(0, 0, 8);
            Character_Chara_GS2(14, "S1_04F", 0);
            Voice_PlayVoice("P7414000_N01200", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "I don't like the likes of that guy.\nI'll let him have it!");
            Message_Who(0);
            Message_MsgDisp("主人公", "W-Wait, Yuu-kun!\nDon't make it worse!");
            Character_BlinkStart(14, 2, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("P7414000_N01300", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Eh～... I get it.\nBut, Sis was bad, too.\nYou should have let them have it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh, what a huge mistake...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(14, 86, 1);
    }
