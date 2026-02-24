section "b04_m3_032"{
    int var0 = Date_GetDateOption(2, 5);
    Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
    Background_Bg_GS2("BG_WF320_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_WF_320_000", 127, 40);
    if (var0 == 0){
        Voice_PlayVoice("B0403032_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "They have trained this orca quite\nwell.\nIt is perfectly in sync with the\ntrainer.");
        Message_MsgSel("I want to try riding on its back.", "It had appeal.", "It's also called a \"killer whale\".");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Character_BlinkStart(3, 2, (#1), 1);
            Voice_PlayVoice("B0403032_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nIsn't that something the trainer\ndoes?\nYou would just be thrown off.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403032_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes, because it has a large body.\nIt jumps differently to how flying\nfish jump.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(3, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403032_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes, the scientific name is \"Orcinus\norca\".\nThe fact that we do not use that\nname is proof of its friendliness.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Voice_PlayVoice("B0403032_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Their large bodies, and their\nagility...\nOrcas have the charm to fascinate\npeople.");
        Message_MsgSel("Their intelligence, as well!", "It's cute, like a panda▼", "Even so, it's a massive fish...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(3, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403032_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes, apparently, their brains are\nfour times larger than that of\nhumans....\nThey must be thinking.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403032_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "That comparison is simply based on\ntheir appearance.\nBut I do understand what you're\nsaying.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("B0403032_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "You have made a fundamental mistake.\nOrcas are mammals....\nWere you not listening to the\nexplanation?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 2){
        Voice_PlayVoice("B0403032_C00800", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "There were signs near the entrance.\n\"Please watch out for spraying\nwater\".");
        Message_MsgSel("Then let's watch from the uppermost seats.", "Water spray? Bring it on!", "Let's calculate where we should sit.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403032_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes...\nAlthough I feel like watching from\nup close, it is better to sit\nfurther away than to get wet.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0403032_C01000", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... I cannot be that defiant.\nI do not want to catch a cold on the\nway home.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Voice_PlayVoice("B0403032_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nBut you might catch a cold if your\nhead gets covered with water.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Y-Yeah...");
                Voice_PlayVoice("B0403032_C01200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Are you saying that you do not mind\nthat?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, I don't mind.");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("B0403032_C01300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... Alright! I have also decided.\nLet us sit in the very front row.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_BlinkStart(3, 2, (#1));
                Voice_PlayVoice("B0403032_C01400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nHonestly speaking, I also want to\nexperience the orca's power from up\nclose.");
                Character_BlinkStart(3, 0, (#1));
                Voice_PlayVoice("B0403032_C01500", 3, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "So, let's get some good seats!\nHurry, ｛主人公｝.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Okay!");
                }
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(3, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403032_C01600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Right, assuming that they will land\nwithin 2 metres of their original\nposition, and their body weight is\nabout 5 tonnes...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
