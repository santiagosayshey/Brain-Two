function Skill({ skill }) {
    return (
        <div className="skill" style={{ backgroundColor: skill.color }}>
            <p>
                {skill.skill}
                {skill.level === "beginner" ? "👶" : skill.level === "intermediate" ? "👍" : "💪"}
            </p>
        </div>
    )
}
