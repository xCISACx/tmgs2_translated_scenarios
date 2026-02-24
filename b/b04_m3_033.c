section "b04_m3_033"{
    int var0 = Date_GetDateOption(2, 6);
    if (var0 == 0){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 0, 11);
        Background_Bg_GS2("BG_WF330_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_330_000", 127, 40);
        Voice_PlayVoice("B0403033_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "How shocking...!\nSo whale sharks are so huge.");
        Message_MsgSel("They don't feel scary, as they have love.", "It's like we'll get swallowed by them!", "It seems like it was hard to get them here.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403033_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Love...? I wonder.\nIt is not really something I can\nquestion, since they do not have\nfacial expressions.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("B0403033_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "They have their own species in the\ntank with them, and they do not\nattack humans....\nThere is no reason to be that\nworried.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(3, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403033_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes, I was also just thinking that.\nAt any rate, researching their size\nwould be a great project.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Background_Bg_GS2("BG_WF330_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_330_000", 127, 40);
        Voice_PlayVoice("B0403033_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Although whale sharks are large,\nthis fish tank is considerably\nlarger.");
        Message_MsgSel("Cleaning it would be tough.", "I'm curious about the volume of water.", "It's just way too big.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403033_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Right....\nLook, a diver is cleaning the tank.\nIt would take a whole day to clean.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(3, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403033_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ah, really?\nWhen you think about the periodic\nwater change, it seems like there is\nmore water than I imagined.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("B0403033_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nThe whale shark will die if it does\nnot continue swimming, so it needs\nthis much space, doesn't it?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Background_Bg_GS2("BG_WF330_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_330_000", 127, 40);
        Voice_PlayVoice("B0403033_C00800", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "They have composure...\nIt would be a nice thing to swim\nwith the whale sharks.");
        Message_MsgSel("Let's move closer to the tank!", "They swim quite fast, so it would be tough.", "Can you swim, ｛Hikami＊＊｝?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403033_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Right...\nIf we move closer to the tank, it\nfeel as if we were swimming with\nthem.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(3, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403033_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... Definitely.\nYou might not realize it since they\nare so big, but it would even be\nhard for good swimmers.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(3, 3, (#1));
                Voice_PlayVoice("B0403033_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I...\nIt does not matter if I can swim or\nnot!\nI was just speaking hypothetically.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403033_C01200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", ".........\nLet us just keep this between us,\nokay?\nI am actually... bad at swimming.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh, then...");
                Character_BlinkStart(3, 3, (#1));
                Voice_PlayVoice("B0403033_C01300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Yes, I want to be able to swim.\nBut even though I say that, I do not\nfeel like practicing.");
                Message_Who(0);
                Message_MsgDisp("主人公", ".........");
                Character_ChFace(0, 0, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403033_C01400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "That is why I kind of want to be\nlike this whale shark, who can swim\nso easily even though it is so\nlarge.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Is that so.");
                Voice_PlayVoice("B0403033_C01500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Yes....\nSo I wonder if it is okay to watch\nthem for a little while longer.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Sure, it's fine.");
                Character_BlinkStart(3, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0403033_C01600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "If I am standing in front of the\ntank, it feels like I am swimming\nwith you and the whale sharks...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Haha ｛Hikami＊＊｝ is so\ncute.)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
